#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the selection sort algorithm
 * @array: the array
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, min_i, next_i;

	if (array == NULL || size < 2)
	{
		return;
	}

	i = 0;
	while (i < size - 1)
	{
		min_i = i;
		next_i = i + 1;
		while (next_i < size)
		{
			if (array[next_i] < array[min_i])
			{
				min_i = next_i;
			}
			next_i = next_i + 1;
		}

		if (i != min_i)
		{
			temp = array[i];
			array[i] = array[min_i];
			array[min_i] = temp;
			print_array(array, size);
		}
		i = i + 1;
	}
}
