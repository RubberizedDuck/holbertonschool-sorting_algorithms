#include "sort.h"

/**
 * partition - moves integers around in array if higher
 * or lower than than the pivot.
 * @array: pointer to first element in array
 * @low: first element in partition
 * @high: last element in partition
 * Return: index value of the next pivot
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	return (i + 1);
}

/**
 * _quick_sort - recursive function of quick_sort
 * @array: pointer to first element of the array
 * @low: left index
 * @high: right index
 * @size: size of array
 * Return: void
 */

void _quick_sort(int *array, int low, int high, size_t size)
{
	int pivot;


	if (low < high)
	{
		pivot = partition(array, low, high);

		_quick_sort(array, low, pivot - 1, size);

		_quick_sort(array, pivot + 1, high, size);
	}
	print_array(array, size);
}

/**
 * quick_sort - functions that sorts and array of integers
 * using the quick sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}
