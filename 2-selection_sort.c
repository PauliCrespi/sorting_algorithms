#include "sort.h"

/**
 *selection_sort - main func
 *@array : array
 *@size : size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int aux, flag;

	for (j = 0; j < size - 1; j++)
	{
		aux = array[j];
		for (i = j; i < size; i++)
		{
			if (array[i] < aux)
			{
				aux = array[i];
				flag = i;
			}
		}
		array[flag] = array[j];
		array[j] = aux;
		print_array(array, size);
	}
}
