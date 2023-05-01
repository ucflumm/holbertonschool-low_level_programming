#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: destination pointer
*/

char *_strcpy(char *dest, char *src)
{
	return (memcpy(dest, src, strlen(src) + 1));
}
