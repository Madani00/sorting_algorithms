#include "sort.h"


/**
 * get_digit - ado lih
 * @number: rakam
 * @digit: blasot
 * Return: rado blasto
 */


int get_digit(long number, int digit)

{

	long inc = 0L, pow = 1L, ret;

	for (inc = 0; inc < digit; inc++)
		pow *= 10L;
	ret = ((number / pow) % 10);
	return (ret);

}


/**
 * radix_pass - mnin kharaj
 * @array: li fih
 * @size: ajmo
 * @digit: lifiha
 * @new_array: hdafo
 * Return: khawi
 */


int radix_pass(int *array, ssize_t size, int digit, int *new_array)

{

	ssize_t inc;
	int buckets[10] = {0};

	for (inc = 0; inc < size; inc++)
		buckets[get_digit(array[inc], digit)]++;
	for (inc = 1; inc <= 9; inc++)
		buckets[inc] += buckets[inc - 1];
	for (inc = size - 1; inc > -1; inc--)
		new_array[buckets[get_digit(array[inc], digit)]-- - 1] = array[inc];
	return (1);

}


/**
 * radix_sort - kharjo
 * @size: zido
 * @array: dyalo
 * Return: rado
 */


void radix_sort(int *array, size_t size)

{

	int *old_array, *new_array, *temp_ptr, *ptr, max = 0;
	size_t inc, sd = 1;

	if (!array || size < 2)
		return;

	for (inc = 0; inc < size; inc++)
		if (array[inc] > max)
			max = array[inc];
	while (max /= 10)
		sd++;
	old_array = array;
	new_array = ptr = malloc(sizeof(int) * size);
	if (!new_array)
		return;
	for (inc = 0; inc < sd; inc++)
	{

		radix_pass(old_array, (ssize_t)size, inc, new_array);
		temp_ptr = old_array;
		old_array = new_array;
		new_array = temp_ptr;
		print_array(old_array, size);

	}
	for (inc = 0; inc < size; inc++)
		array[inc] = old_array[inc];
	free(ptr);

}
