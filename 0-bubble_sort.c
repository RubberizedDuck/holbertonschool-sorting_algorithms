#include "sort.h"

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
