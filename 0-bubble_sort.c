#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: The array of integer
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int sorted = 0;

	if (!array || size == 0)
		return;

	for (i = 0; i < size - 1 && !sorted; i++)
	{
		sorted = 1;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				sorted = 0;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}