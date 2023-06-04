#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: memory to allocate
 * Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
