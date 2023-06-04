#include "main.h"

/**
 * malloc_checked - allocates space for 2d array
 * @b: no idea what this does?
 * 
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}