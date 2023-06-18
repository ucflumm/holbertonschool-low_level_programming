#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - does something?
 * @array: 0 if successful, 1 for error
 * @size: size of array
 * @cmp: comparator function
 * Return: no element match -1, size too small return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(*array) != 0)
			return (counter);
		array++;
	}

	/** No match return -1 */
	return (-1);

}
