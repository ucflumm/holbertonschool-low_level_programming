#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - exec function on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: does stuff
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
