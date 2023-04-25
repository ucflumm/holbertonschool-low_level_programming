#include "main.h"

/** 
 * _strncat -  
 * @dest: destination string
 * @src: source string
 * @n: number of characters
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
	*dest = '\0';
	return (rtn);
}