#include "sort.h"

/**
 * bubble_sort - function taht sorts an array of integers in ascending order.
 * @array: array of integers.
 * @size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
