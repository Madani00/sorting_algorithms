#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using Shell sort
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
    int temp;

    if (array == NULL || size == NULL)
        return;

    for (gap = gap * 3 + 1; gap > 0; gap = (gap - 1) / 3)
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
        print_array(array, size);
    }
}