#include "main.h"

/**
 * array_range - something the function
 * @min: something the doing
 * @max: something the doing
 * Return: something the doing
*/

int *array_range(int min, int max)
{
	int *ptr;
	int size, counter;
	if (min > max)
		return (NULL);
	size = max - min;
	if (size == 0)
		size = 1;
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	if (size == 1)
	{
		ptr[0] = min;
		return (ptr);
	}
	for (counter = 0; counter < size; counter++)
	{
		ptr[counter] = min + counter;
	}
	return (ptr);
}