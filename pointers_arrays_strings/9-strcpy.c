#include "main.h"

/** 
 * _strcpy - copies a string
 * @dest: destination string 
 * @src: source string
 * Return: destination pointer
*/

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}