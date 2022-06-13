#include "sort.h"

/**
 *lomuto - parser func
 *@array : array
 *@size : size of array
 *@low : low
 *@high : high
 *Return: size
 */
size_t lomuto(int *array, size_t size, int low, int high)
{
	int pivot, i, help;
	int j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			help = array[i];
			array[i] = array[j];
			array[j] = help;
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	help = array[i + 1];
	array[i + 1] = array[high];
	array[high] = help;
	if (array[++i] != array[high])
		print_array(array, size);
	return (i);
}

/**
 *quisort - helper func
 *@array : array
 *@size : size
 *@low : low
 *@high : high
 */
void quisort(int *array, size_t size, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = lomuto(array, size, low, high);
		quisort(array, size, low, pi - 1);
		quisort(array, size, pi + 1, high);
	}
}

/**
 *quick_sort - main func
 *@array : array
 *@size : size
 */
void quick_sort(int *array, size_t size)
{
	quisort(array, size, 0, size - 1);
}
