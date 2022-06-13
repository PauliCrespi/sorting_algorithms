#include "sort.h"

/**
 *bubble_sort - func for an array
 *@array : to be sorted
 *@size : size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, y = 0;
	int aux;

	for (y = 0; y < size - 1; y++)
	{
		for (i = 0; i < size - y - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
