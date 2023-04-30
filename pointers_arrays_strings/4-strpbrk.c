#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes 
 * @s: source string
 * @accept: bytes to search for
 * Return: pointer to destination
 * 
*/

char *_strpbrk(char *s, char *accept)
{
	const char *scanp;
	int c, sc;

	while ((c = *s++) != 0) {
		for (scanp = accept; (sc = *scanp++) != 0;)
			if (sc == c)
				return ((char *)(s - 1));
	}
	return (NULL);
}