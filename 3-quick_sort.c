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

/**
 * custom_quickS - The function performs the sorting by dividing the array.
 * @array: array.
 * @low: low.
 * @high: high.
 * @size: size of array.
 */


void custom_quickS(int *array, int low, int high, size_t size)
{
	int divArray;

	if (low < high)
	{
		divArray = lomuto_partition(array, low, high, size);
		custom_quickS(array, low, divArray - 1, size);
		custom_quickS(array, divArray + 1, high, size);
	}
}

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
