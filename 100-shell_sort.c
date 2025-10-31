#include "sort.h"
#include <stdio.h>

/**
* shell_sort - Sorts an array using Shell sort with Knuth sequence
* @array: Array of integers to sort
* @size: Size of the array
*/
void shell_sort(int *array, size_t size)
{
size_t gap = 1, i, j;
int temp;

if (!array || size < 2)
return;

/* Generate initial gap using Knuth sequence: gap = gap * 3 + 1 */
while (gap < size / 3)
gap = gap * 3 + 1;

/* Start sorting with decreasing gaps */
while (gap >= 1)
{
for (i = gap; i < size; i++)
{
temp = array[i];
j = i;

while (j >= gap && array[j - gap] > temp)
{
array[j] = array[j - gap];
j -= gap;
}

array[j] = temp;
}

print_array(array, size);  /* Print after each gap reduction */
gap = (gap - 1) / 3;
}
}

