#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: source string
 * @accept: bytes to check
 * Return: number of bytes in the initial segment of s
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s;
	const char *c;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
			break;
		}
	if (*c == '\0')
	break;
	s++;
	}

	return (s - s1);
}
