#include "sort.h"

void swap_ints(int *a, int *b);

/**
 * swap_ints - Swap two integers into an array
 * @a: The first integer to get swapped
 * @b: The second integer to get swappwed
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int lomuto_partition(int *array, size_t size, int left, int right);

/**
 * lomuto_partition - Order a subset of an array of integers using
 *                    the lomuto partition method ==> last element as pivot.
 * @array: array of ints
 * @size: size of array
 * @left: starting index
 * @right: ending index
 *
 * Return: final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, under;

	pivot = array + right;
	for (above = under = left; under < right; under++)
	{
		if (array[under] < *pivot)
		{
			if (above < under)
			{
				swap_ints(array + under, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

void lomuto_sort(int *array, size_t size, int left, int right);

/**
 * lomuto_sort - Implement quicksort algorithm using recursion
 * @array: array of ints to get sorted
 * @size: size of the array
 * @left: starting index
 * @right: ending index
 * Description: the Lomuto partition method.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

