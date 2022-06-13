#include "sort.h"

/**
 *
 *
 *
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t n, interval, j, i;
	int temp;

	n = size;
	for (interval = n / 2; interval > 0; interval /= 2)
	{
		for (i = interval; i < n; i = (i * 3) + 1)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
