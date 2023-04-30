#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to area
 * @b: byte to be filled
 * @n: number of bytes
 * Return: pointer to destination
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
