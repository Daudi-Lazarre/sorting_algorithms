#include "sort.h"
/**
 *bubble_sort - Algoritm bubble
 *@array: list of numbers
 *@size: lenght of the Array
 *Return: Sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t max;
	int temp;

	if (array == NULL)
		return;
	if (size == 0)
		return;
	if (size == 1
	    return;

	for (max = size - 1; max > 0 ; max--)
	{
		for (i = 0; i < max; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}

	}
}
