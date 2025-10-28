#include "sort.h"
#include <stdio.h>

/**
 * counting_sort - Sorts an array using the Counting sort algorithm
 * @array: Array of integers to sort
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
    int *count, *output;
    int max = 0;
    size_t i;

    if (!array || size < 2)
        return;

    /* Find the maximum value in the array */
    for (i = 0; i < size; i++)
        if (array[i] > max)
            max = array[i];

    /* Allocate and initialize count array */
    count = calloc(max + 1, sizeof(int));
    if (!count)
        return;

    /* Count occurrences */
    for (i = 0; i < size; i++)
        count[array[i]]++;

    /* Print count array */
    print_array(count, max + 1);

    /* Accumulate counts */
    for (i = 1; i <= (size_t)max; i++)
        count[i] += count[i - 1];

    /* Build output array */
    output = malloc(sizeof(int) * size);
    if (!output)
    {
        free(count);
        return;
    }

    for (i = size; i-- > 0;)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    /* Copy sorted values back to original array */
    for (i = 0; i < size; i++)
        array[i] = output[i];

    free(count);
    free(output);
}

