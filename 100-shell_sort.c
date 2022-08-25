#include "sort.h"

/**
 * shell_sort - Sorts an array using the shell sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	/* starts with a big gap and then reduces the gap */
	gap = size / 2;
	while (gap > 0)
	{
		i = gap;
		while (i < size)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = temp;
			i = i + 1;
		}
		gap = gap / 2;
		print_array(array, size);
	}
	print_array(array, size);
}
