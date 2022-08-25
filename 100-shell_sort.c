#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sorts an array using the shell sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	gap = 1;
	while (gap < (size / 3))
		gap = gap * 3 + 1;

	while (gap >=1)
	{
		i = gap;
		while (i < size)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j = j - gap;
			}
			i = i + 1;
		}
		print_array(array, size);
		gap = gap / 3;
	}
}
