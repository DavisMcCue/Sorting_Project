/***************************************************************************************
*    Title: C++ Program to Implement Bubble Sort
*    Website: https://www.tutorialspoint.com/
*    Author: Nancy Den
*    Date Published: 14-Mar-2019
*    Availability: https://www.tutorialspoint.com/cplusplus-program-to-implement-bubble-sort
*    NOTE: I DON'T own any of this content within bubblesort method nor the swapping method. ALL credit goes to Nancy Den on 
*    https://www.tutorialspoint.com/ for her post on the algorithm.
***************************************************************************************/ 

#include <cstdlib>    // Provides EXIT_SUCCESS, size_t
#include <iostream>   // Provides cout and cin
#include "number_data.h"
using namespace std;

int bubbleSort(int data[], size_t n)
{
    //From tutorialspoint.com and NANCY DEN Below
	int count = 0;
    for (int i = 0; i < n; i++) 
    {
        int swaps = 0;         
        for (int j = 0; j < n - i - 1; j++) //first pass
        {
            if (data[j] > data[j + 1]) 
            {       //when the current item is bigger than next
                swapping(data[j], data[j + 1]);
                swaps = 1;    //set swap flag
                count++; // counting if idea does swap - Davis's comments
            }
        } 
        //count++; // counting if item doesnt need to be swapped - Davis's comments
    }
    return count;
}

void swapping(int& a, int& b) 
{      //swap the content of a and b
	int temp;
	temp = a;
	a = b;
	b = temp;
}//From tutorialspoint.com and NANCY DEN Above