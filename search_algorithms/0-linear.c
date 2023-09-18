#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Sanity Checks */
	if (array == NULL)
		return (-1);

	/* Loop through array */
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
		i = i + 1;
	}
	return (-1);
}
