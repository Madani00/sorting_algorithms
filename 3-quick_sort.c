#include "sort.h"


/**
 * quick_sort - sorts an array of integers in ascending order
 * using the quick sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: khawi
*/


void quick_sort(int *array, size_t size)

{

	if (!array || !size)
		return;

	recursive_quick(array, 0, size - 1, size);

}


/**
 * recursive_quick - Recursive helper function for quick_sort
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 */


void recursive_quick(int *array, int low, int high, size_t size)

{

	if (low < high)
	{

	int pivot_index = partition(array, low, high, size);

	recursive_quick(array, low, pivot_index - 1, size);
	recursive_quick(array, pivot_index + 1, high, size);

	}

}


/**
 * partition - Implements the partition scheme for quicksort
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 *
 * Return: The final index of the pivot element
 */


int partition(int *array, int low, int high, size_t size)

{

	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{

	if (array[j] < pivot)
	{
		i++;
	swap(&array[i], &array[j]);
	}

	}

	swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);

}


/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */


void swap(int *a, int *b)

{

	int temp = *a;
	*a = *b;
	*b = temp;
}
