#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers.
 * @array: array the sort.
 * @size: size of array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, smallIndex;
	int aux;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		smallIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallIndex])
			smallIndex = j;
		}
		if (smallIndex != i)
		{
			aux = array[i];
			array[i] = array[smallIndex];
			array[smallIndex] = aux;
			print_array(array, size);
		}
	}
}
