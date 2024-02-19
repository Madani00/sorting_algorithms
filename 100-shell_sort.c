#include "sort.h"


/**
 * shell_sort - dih lih
 * @array: mnin araj
 * @size: ajmo
 * Return: walo
 */


void shell_sort(int *array, size_t size)

{

	size_t gap = 1, i, j;
	int temp;

	if (!array || !size)
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
