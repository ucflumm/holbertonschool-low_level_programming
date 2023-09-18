#include "search_algos.h"
/*
 * vmlinuz*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	
	while (i < size)
	{
		
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
		
		
		i = i + 1;

	}

	return (-1);
}
