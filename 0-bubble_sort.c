#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * according to the bubble sort algorithm
 * @array: the array containing integers
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t index = 0, index2;
	int temp;

	if (size < 2)
		return;

	while (index < size)
	{
		index2 = 0;
		while (index2 < size - index - 1)
		{
			if (array[index2] > array[index2 + 1])
			{
				temp = array[index2];
				array[index2] = array[index2 + 1];
				array[index2 + 1] = temp;
				print_array(array, size);
			}
			index2++;
		}
		index++;
	}
}
