#include "main.h"

/**
 * _strncat - concates 2 strings based on n
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * Return: the pointer to the start of dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *rtn;

	rtn = dest;
	while (*dest != '\0')
		dest++;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	src--;
	if (src != '\0')
		*dest = '\0';
	return (rtn);
}
