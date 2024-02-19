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
<<<<<<< HEAD

	size_t step, i, min;
	int temp;

	if (!array || !size)
		return;

	for (step = 0; step < size - 1; step++)
	{
	min = step;
	for (i = 1 + step; i < size; i++)
	{

	if (array[min] > array[i])
	min = i;

	}
	temp = array[step];
	array[step] = array[min];
	array[min] = temp;
	print_array(array, size);
	}

}
=======
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
>>>>>>> 987f4fd10a34da689233f2ea01345f7b3315506a
