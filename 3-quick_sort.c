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

