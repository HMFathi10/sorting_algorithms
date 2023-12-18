#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				continue;
			}
		}
		if (min != i)
		{
			array[i] = array[i] + array[min];
			array[min] = array[i] - array[min];
			array[i] = array[i] - array[min];
			print_array(array, size);
		}
	}
}
