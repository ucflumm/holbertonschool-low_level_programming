#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - exec function on each element of array
 * Return: 0 if successful, 1 for error
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int counter = 0;
	int safe_size = size;

	if (action == NULL)
		exit(1);
	if (array == NULL)
		exit(1);
	
	while (counter < safe_size)
	{
		action(*array);
		array++;
		counter++;
	}
	
}
