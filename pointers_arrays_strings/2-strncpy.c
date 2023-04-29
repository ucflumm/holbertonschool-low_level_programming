#include "main.h"

/**
 * _strncpy - copies a string 
 * @dest: destination pointer
 * @src: source poinnter
 * @n: how much to copy
 * Return: pointer to destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *rtn_string;

	rtn_string = dest;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	/**
	*	while (*src != '\0')
	*	{
	*		*dest = *src;
	*		dest++;
	*		src++;
	*	}
	*/
	return (rtn_string);

}