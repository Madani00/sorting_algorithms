#include "sort.h"
#define parent(x) (((x) - 1) / 2)
#define leftchild(x) (((x) * 2) + 1)


/**
 * ssswap - katbadal
 * @array: lih tam
 * @size: chhal fih
 * @a: onwan a
 * @b: onwan b
 * Return: khawi
 */


void ssswap(int *array, size_t size, int *a, int *b)

{

	if (*a != *b)
	{

		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;

	}
	print_array((const int *)array, size);

}


/**
 * siftdown - kadir amalya
 * @array: khraj
 * @start: fin bda
 * @end: fin sala
 * @size: ajmo
 */


void siftdown(int *array, size_t start, size_t end, size_t size)

{

	size_t root_ = start, _swap, child;

	while (leftchild(root_) <= end)
	{

		child = leftchild(root_);
		_swap = root_;
		if (array[_swap] < array[child])
			_swap = child;
		if (child + 1 <= end &&
			array[_swap] < array[child + 1])
			_swap = child + 1;
		if (_swap == root_)
			return;
		ssswap(array, size, &array[root_], &array[_swap]);
		root_ = _swap;

	}

}


/**
 * heapify - sawbo
 * @array: dyal kharaj
 * @size: ajmo
 */


void heapify(int *array, size_t size)

{

	ssize_t start;

	start = parent(size - 1);
	while (start >= 0)
	{

		siftdown(array, start, size - 1, size);
		start--;

	}

}

/**
 * heap_sort - tsawbo
 * @array: bach tad
 * @size: ajmo
 */


void heap_sort(int *array, size_t size)

{

	size_t end;

	if (!array || size < 2)
		return;
	heapify(array, size);
	end = size - 1;
	while (end > 0)
	{

		ssswap(array, size, &array[end], &array[0]);
		end--;
		siftdown(array, 0, end, size);

	}

}
