#include "main.h"

/**
 * create_array - creates array of chars and initializes with specific char
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to string
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter = 0;

	if (size <= 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	while (counter < size)
	{
		ptr[counter] = c;
		counter++;
	}
	return (ptr);
}
