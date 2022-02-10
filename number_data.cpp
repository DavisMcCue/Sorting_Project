// random_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstdlib>
#include <algorithm>   
#include <string>
#include "number_data.h"
using namespace std;

void fill_random_numbers (int arr [], const unsigned int SIZE)
{
	// Pre:  SIZE is no more than a million, arr has been declared to be
	//       an array of at least SIZE elements.
	// Post: The first SIZE elements of the array arr have been populated with
	//       random integers between 0 and one million.

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = round(rand() / double(RAND_MAX) * 1000000);
	}
}

void fill_sorted_numbers (int asc [], int dsc [], const unsigned int SIZE)
{
	// Pre:  SIZE is no more than a million, and asc and dsc have been declared
	//       to be arrays of at least SIZE elements.
	// Post: The first SIZE elements of the array asc have been populated with
	//       integers between 0 and one million in ascending order, and dsc has
	//       the same numbers in descending order.

	int step = 1000000 / SIZE;

	for (int i = 0; i < SIZE; i++)
	{
		asc[i] = dsc [SIZE-1-i] = step*i;
	}
}

const unsigned int SIZE = 3000; 



int main()
{

	//8000
	int numbers[SIZE];
	int increasing[SIZE];
	int decreasing[SIZE];

	//placeholder
	int temp[SIZE];
	int tempDecreasing[SIZE];
	int tempIncreasing[SIZE];

	int comparisons = 0;
	int comparisons2 = 0;
	int comparisons3 = 0;
	string OutputStr = "";



	fill_random_numbers(numbers, SIZE);
	fill_sorted_numbers(increasing, decreasing, SIZE);

	Reserving(tempDecreasing);

	std::copy(begin(numbers), end(numbers), temp); //random copy
	std::copy(begin(decreasing), end(decreasing), tempDecreasing); // decrease copy
	std::copy(begin(increasing), end(increasing), tempIncreasing); // sorted data - increasing

	// NOW apply sorting algorithms to a copy of each array or copy of a slice of the array.

	//---------------------------- MergeSort HERE ---------------------------
	comparisons = mergesort(temp, SIZE);
	printSortedOutput(temp, SIZE);
	//cout << "Sorted Data ";
	OutputStr = "\nMerge Sort \nSort Data: " + to_string(comparisons) + " \n";

	//MergeSort- Decrease Data 
	comparisons2 = mergesort(tempDecreasing, SIZE);
	printSortedOutput(tempDecreasing, SIZE);
	//cout << "Decrease Data ";
	OutputStr += "Decrease Data: " + to_string(comparisons2) + "\n";

	//MergeSort- Increase Data 
	comparisons3 = mergesort(tempIncreasing, SIZE);
	printSortedOutput(tempIncreasing, SIZE);
	//cout << "Increase Data ";
	OutputStr += "Increase Data: " + to_string(comparisons3) + "\n";

	OutputStr += "\n" + to_string(3000) + " ||" + " Expected Worst Case:   O(n log(n))   Expected Average Case:   O(n log(n))  Expected Best Case:  O(n log(n))  Actual Descending: " + to_string(comparisons2) + " Actual Random: " + to_string(comparisons) + " Actual Increase: " + to_string(comparisons3) + "\n";

	printComparisons(OutputStr);
	
	//---------------------------- HeapSort SORT HERE ---------------------------
	
		comparisons = 0;
		comparisons2 = 0;
		comparisons3 = 0;
		OutputStr = "";

		std::copy(begin(numbers), end(numbers), temp); //random copy
		std::copy(begin(decreasing), end(decreasing), tempDecreasing); // decrease copy
		std::copy(begin(increasing), end(increasing), tempIncreasing); // sorted data - increasing

		//Reserving(tempDecreasing);

		//HeapSort - Sorted Data
		//printSortedOutput(temp, SIZE);
		comparisons = heapsort(temp, SIZE);
		printSortedOutput(temp, SIZE);
		//cout << "Sorted Data ";
		OutputStr = "\nHeapSort \nSort Data: " + to_string(comparisons) + " \n";

		//HeapSort - Decrease Data
		//printSortedOutput(tempDecreasing, SIZE);
		comparisons2 = heapsort(tempDecreasing, SIZE);
		printSortedOutput(tempDecreasing, SIZE);
		//cout << "Decrease Data ";
		OutputStr += "Decrease Data: " + to_string(comparisons2) + "\n";

		//HeapSort - Increase Data
		//printSortedOutput(tempIncreasing, SIZE);
		comparisons3 = heapsort(tempIncreasing, SIZE);
		printSortedOutput(tempIncreasing, SIZE);
		//cout << "Increase Data ";
		OutputStr += "Increase Data: " + to_string(comparisons3) + "\n";

		OutputStr += "\n" + to_string(3000) + " ||" + " Expected Worst Case:   O(n log(n))   Expected Average Case:   O(n log(n))  Expected Best Case:  O(n log(n))  Actual Descending: " + to_string(comparisons2) + " Actual Random: " + to_string(comparisons) + " Actual Increase: " + to_string(comparisons3) + "\n";

		printComparisons(OutputStr);


		//---------------------------- Select SORT HERE ---------------------------

		comparisons = 0;
		comparisons2 = 0;
		comparisons3 = 0;
		OutputStr = "";

		std::copy(begin(numbers), end(numbers), temp); //random copy
		std::copy(begin(decreasing), end(decreasing), tempDecreasing); // decrease copy
		std::copy(begin(increasing), end(increasing), tempIncreasing); // sorted data - increasing

		//Reserving(tempDecreasing);

		//Select SORT - Sorted Data
		//printSortedOutput(temp, SIZE);
		comparisons = selectionsort(temp, SIZE);
		printSortedOutput(temp, SIZE);
		//cout << "Sorted Data ";
		OutputStr = "\Selectionsort \nSort Data: " + to_string(comparisons) + " \n";

		//Select SORT - Decrease Data
		//printSortedOutput(tempDecreasing, SIZE);
		comparisons2 = selectionsort(tempDecreasing, SIZE);
		printSortedOutput(tempDecreasing, SIZE);
		//cout << "Decrease Data ";
		OutputStr += "Decrease Data: " + to_string(comparisons2) + "\n";

		//Select SORT - Increase Data
		//printSortedOutput(tempIncreasing, SIZE);
		comparisons3 = selectionsort(tempIncreasing, SIZE);
		printSortedOutput(tempIncreasing, SIZE);
		//cout << "Increase Data ";
		OutputStr += "Increase Data: " + to_string(comparisons3) + "\n";

		OutputStr += "\n" + to_string(3000) + " ||" + " Expected Worst Case:  O(n^2)  Expected Average Case:   O(n^2)  Expected Best Case:  O(n^2)  Actual Descending: " + to_string(comparisons2) + " Actual Random: " + to_string(comparisons) + " Actual Increase: " + to_string(comparisons3) + "\n";

		printComparisons(OutputStr);

		
		//---------------------------- QUICK SORT HERE ---------------------------

		comparisons = 0;
		comparisons2 = 0;
		comparisons3 = 0;
		OutputStr = "";

		std::copy(begin(numbers), end(numbers), temp); //random copy
		std::copy(begin(decreasing), end(decreasing), tempDecreasing); // decrease copy
		std::copy(begin(increasing), end(increasing), tempIncreasing); // sorted data - increasing

		//Reserving(tempDecreasing);

		//HeapSort - Sorted Data
		//printSortedOutput(temp, SIZE);
		comparisons = quicksort(temp, SIZE);
		printSortedOutput(temp, SIZE);
		//cout << "Sorted Data ";
		OutputStr = "\QuickSort \nSort Data: " + to_string(comparisons) + " \n";

		//HeapSort - Decrease Data
		//printSortedOutput(tempDecreasing, SIZE);
		comparisons2 = quicksort(tempDecreasing, SIZE);
		printSortedOutput(tempDecreasing, SIZE);
		//cout << "Decrease Data ";
		OutputStr += "Decrease Data: " + to_string(comparisons2) + "\n";

		//HeapSort - Increase Data
		//printSortedOutput(tempIncreasing, SIZE);
		comparisons3 = quicksort(tempIncreasing, SIZE);
		printSortedOutput(tempIncreasing, SIZE);
		//cout << "Increase Data ";
		OutputStr += "Increase Data: " + to_string(comparisons3) + "\n";

		OutputStr += "\n" + to_string(3000) + " ||" + " Expected Worst Case:  O(n^2)  Expected Average Case:   O(n log(n))  Expected Best Case:  O(n log(n))  Actual Descending: " + to_string(comparisons2) + " Actual Random: " + to_string(comparisons) + " Actual Increase: " + to_string(comparisons3) + "\n";

		printComparisons(OutputStr);
		

		
		//---------------------------- Bubble SORT HERE ---------------------------

		comparisons = 0;
		comparisons2 = 0;
		comparisons3 = 0;
		OutputStr = "";

		std::copy(begin(numbers), end(numbers), temp); //random copy
		std::copy(begin(decreasing), end(decreasing), tempDecreasing); // decrease copy
		std::copy(begin(increasing), end(increasing), tempIncreasing); // sorted data - increasing

		//Reserving(tempDecreasing);

		//Bubble - Sorted Data
		//printSortedOutput(temp, SIZE);
		comparisons = bubbleSort(temp, SIZE);
		printSortedOutput(temp, SIZE);
		//cout << "Sorted Data ";
		OutputStr = "\Bubble \nSort Data: " + to_string(comparisons) + " \n";

		//Bubble - Decrease Data
		//printSortedOutput(tempDecreasing, SIZE);
		comparisons2 = bubbleSort(tempDecreasing, SIZE);
		printSortedOutput(tempDecreasing, SIZE);
		//cout << "Decrease Data ";
		OutputStr += "Decrease Data: " + to_string(comparisons2) + "\n";

		//Bubble - Increase Data
		//printSortedOutput(tempIncreasing, SIZE);
		comparisons3 = bubbleSort(tempIncreasing, SIZE);
		printSortedOutput(tempIncreasing, SIZE);
		//cout << "Increase Data ";
		OutputStr += "Increase Data: " + to_string(comparisons3) + "\n";

		OutputStr += "\n" + to_string(3000) + " ||" + " Expected Worst Case:  O(n^2)  Expected Average Case:  O(n^2)  Expected Best Case: O(n)  Actual Descending: " + to_string(comparisons2) + " Actual Random: " + to_string(comparisons) + " Actual Increase: " + to_string(comparisons3) + "\n";

		printComparisons(OutputStr);

		//---------------------------- Insertion SORT HERE ---------------------------

		comparisons = 0;
		comparisons2 = 0;
		comparisons3 = 0;
		OutputStr = "";

		std::copy(begin(numbers), end(numbers), temp); //random copy
		std::copy(begin(decreasing), end(decreasing), tempDecreasing); // decrease copy
		std::copy(begin(increasing), end(increasing), tempIncreasing); // sorted data - increasing

		//Reserving(tempDecreasing);

		//Insertion - Sorted Data
		//printSortedOutput(temp, SIZE);
		comparisons = insertionSort(temp, SIZE);
		printSortedOutput(temp, SIZE);
		//cout << "Sorted Data ";
		OutputStr = "\Insertion \nSort Data: " + to_string(comparisons) + " \n";

		//Insertion - Decrease Data
		//printSortedOutput(tempDecreasing, SIZE);
		comparisons2 = insertionSort(tempDecreasing, SIZE);
		printSortedOutput(tempDecreasing, SIZE);
		//cout << "Decrease Data ";
		OutputStr += "Decrease Data: " + to_string(comparisons2) + "\n";

		//Insertion - Increase Data
		//printSortedOutput(tempIncreasing, SIZE);
		comparisons3 = insertionSort(tempIncreasing, SIZE);
		printSortedOutput(tempIncreasing, SIZE);
		//cout << "Increase Data ";
		OutputStr += "Increase Data: " + to_string(comparisons3) + "\n";

		OutputStr += "\n" + to_string(3000) + " ||" + " Expected Worst Case:  O(n^2)  Expected Average Case:  O(n^2)  Expected Best Case: O(n)  Actual Descending: " + to_string(comparisons2) + " Actual Random: " + to_string(comparisons) + " Actual Increase: " + to_string(comparisons3) + "\n";

		printComparisons(OutputStr);
		
		
}
//resverse array to descreasing order
void Reserving(int newData[])
{
	for (int front = 0, back = SIZE - 1; front < back; front++, back--)
	{
		swap(newData[front], newData[back]);
	}
}

