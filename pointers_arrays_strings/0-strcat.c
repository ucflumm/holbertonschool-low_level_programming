#include "main.h"

/**
 * _strcat - concatenates two strings 
 * @dest: destination string
 * @src: source string
 * 
*/

char *_strcat(char *dest, char *src)
{
	int i, n;
	char *rtn = dest;
	n = strlen (src);
	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (rtn);
}