#include "sort.h"

/**
 * selection_sort - in-place sorting algo
 *@array: array
 *@size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t minimum;
	int temp;

	for (i = 0; i < (size - 1); i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		if (minimum != i)
		{
			temp = array[minimum];
			array[minimum] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
