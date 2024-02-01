#include "sort.h"


/**
 * quick_sort - function that sorts an array of integers in ascending order.
 * @array: array.
 * @size: size of array.
 */


void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	custom_quickS(array, 0, size - 1, size);
}
