#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>

/**
 * _atoi - convert first integer string to integer
 * @s: string to check.
 * Return: int value.
*/

int _atoi(char *s)
{
	unsigned int n = 0;
	int neg = 0;

	while (*s < 48 || *s > 57)
	{
		if (*s == '-')
			neg++;
		if (*s == '\0')
			return (0);
		s++;
	}
	n = (*s - '0');
	s++;

	while (*s >= 48 && *s <= 57)
	{
		n *= 10;
		n += *s - '0';
		s++;
	}

	if (neg % 2 != 0 && n != 0)
		neg = -1;
	else
	if (n != 0)
		neg = 1;

	return (n * neg);
}
