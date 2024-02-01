#include "sort.h"


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
