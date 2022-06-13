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
		aux = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[aux])
			{
				aux = i;
			}
		}
		if (aux != (int)j)
		{
			flag = array[j];
			array[j] = array[aux];
			array[aux] = flag;
			print_array(array, size);
		}
	}
}
