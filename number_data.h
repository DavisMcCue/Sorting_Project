#pragma once
#include <string>
using namespace std;

void fill_random_numbers(int [], const unsigned int);
void fill_sorted_numbers(int[], int[], const unsigned int);

// PROTOTYPES of the functions used in this test program:
int mergesort(int data[], size_t n);
// Precondition: data is an array with at least n components.
// Postcondition: The elements of data have been rearranged so
// that data[0] <= data[1] <= ... <= data[n-1].
// NOTE: If there is insufficient dynamic memory, then new_handler is called.
int merge(int data[], size_t n1, size_t n2);
// Precondition: data is an array (or subarray) with at least n1+n2 elements. 
// The first n1 elements (from data[0] to data[n1-1]) are sorted from smallest 
// to largest, and the last n2 (from data[n1] to data[n1+n2-1]) are also 
// sorted from smallest to largest.
// Postcondition: The first n1+n2 elements of data have been
// rearranged to be sorted from smallest to largest.
// NOTE: If there is insufficient dynamic memory, then new_handler is called.




int heapsort(int data[], size_t n);
// Precondition: data is an array with at least n components.
// Postcondition: The elements of data have been rearranged so
// that data[0] <= data[1] <= ... <= data[n-1].

size_t parent(size_t k);
// Precondition: k> 0.
// Postcondition: The function assumes that k is the index of an array element, where the array
// represents a complete binary tree. The return value is the index of the parent of node k, using
// the formula from rule 3 on page 624.

size_t left_child(size_t k);
// Postcondition: The function assumes that k is the index of an array element, where the array
// represents a complete binary tree. The return value is the index of the left child of node k,
// using the formula from rule 2 on page 624.

size_t right_child(size_t k);
// Postcondition: The function assumes that k is the index of an array element, where the array
// represents a complete binary tree. The return value is the index of the right child of node k,
// using the formula from rule 2 on page 624.

int make_heap(int data[], size_t n);
// Precondition: data is an array with at least n elements.
// Postcondition: The elements of data have been rearranged so that the
// complete binary tree represented by this array is a heap.

int reheapify_down(int data[], size_t n);
// Precondition: n > 0, and data is an array with at least n elements. These elements form a
// heap **except** that data[0] may be in an incorrect location.
// location.
// Postcondition: The data values have been rearranged so that the first n elements of data now
// form a heap.


int selectionsort(int data[], size_t n);

int quicksort(int data[], size_t n);
void partition(int data[], size_t n, size_t& pivot_index);

int bubbleSort(int data[], size_t n);
int insertionSort(int data[], size_t n);

void printSortedOutput(int data[], size_t n);
void printComparisons(string output);

void Reserving(int data[]);
void swapping(int& a, int& b);