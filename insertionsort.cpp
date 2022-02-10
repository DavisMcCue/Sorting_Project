/***************************************************************************************
*    Title: Insertion Sort
*    Website: https://www.geeksforgeeks.org/
*    Author: GeeksforGeeks
*    Last Update Date: 07-25-2020
*    Availability: https://www.geeksforgeeks.org/insertion-sort/
*    NOTE: I DON'T own any of this content within Insertionsort method. ALL credit goes to geeksforgeeks!
***************************************************************************************/
#include <cstdlib>    // Provides EXIT_SUCCESS, size_t
#include <iostream>   // Provides cout and cin
#include "number_data.h"
using namespace std;
int insertionSort(int data[], size_t n)
{
    int i, key, j;
    int count = 0;
    for (i = 1; i < n; i++)
    {
        key = data[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j = j - 1;
            count++;
        }
        data[j + 1] = key;
    }
    return count;
}