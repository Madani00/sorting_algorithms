#include "sort.h"


/**
 * integer_count - kaya7sab
 * @array: atawh lina
 * @size: ajmo
 * @range: taakaod lih
 * Return: adad hom
 */


int integer_count(int *array, size_t size, int range)

{

	int total = 0;
	size_t i;

	for (i = 0; i < size; i++)
	{

		if (array[i] == range)
			total++;

	}
	return (total);

}


/**
 * counting_sort - tam
 * @array: dyal noata
 * @size: hajmo
 */


void counting_sort(int *array, size_t size)
{

	size_t ind, c;
	int b = 0, k = 0, r = 0;
	int *array2, *newArray;

	if (!array || size < 2)
		return;
	for (ind = 0; ind < size; ind++)
	if (array[ind] > k)
	{
		k = array[ind];
	}
	array2 = malloc(sizeof(int) * (k + 1));
	if (!array2)
		return;
	for (c = 0; c < ((size_t)k + 1); c++)
	{
		if (c == 0)
			array2[c] = integer_count(array, size, r);
		else
	{
	b = array2[c - 1] + integer_count(array, size, r);
	array2[c] = b;
	}
		r++;
	}
	print_array(array2, (k + 1));
	newArray = malloc(sizeof(int) * size);
	if (!newArray)
	{
		free(array2);
		return;
	}
	for (ind = 0; ind < size; ind++)
		newArray[array2[array[ind]]-- - 1] = array[ind];
	for (ind = 0; ind < size; ind++)
		array[ind] = newArray[ind];
	free(newArray);
	free(array2);

}
