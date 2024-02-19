#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
    size_t step, i, min;
    int temp;

    if (!array ||!size)
	    return;
    
    for (step = 0; step < size - 1; step++)
    {
        min = step;
        for (i = 1 + step; i < size; i++)
        {
            if (array[min] > array[i])
                min = i;
        }
        if (array[step] > array[min])
        {
            temp = array[step];
            array[step] = array[min];
            array[min] = temp;
            print_array(array, size);
        }
    }
}