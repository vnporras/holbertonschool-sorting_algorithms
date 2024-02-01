#include "sort.h"

/**
 * lomuto_partition - function that implements the Lomuto partitioning scheme.
 * @array: array.
 * @low: low.
 * @high: high.
 * @size: size of array.
 * Return: The function returns the final index.
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int i, j, aux, divArray;

	divArray = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= divArray)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}
