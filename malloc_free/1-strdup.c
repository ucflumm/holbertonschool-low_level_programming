#include "main.h"

/**
 * _strdup - returns pointer to allocated space with string as param
 * @str: string as argument
 * Return: pointer to allocated space
*/

char *_strdup(char *str)
{
	size_t len;
	char *copy;

	len = _strlen(str) + 1;
	if (!(copy = malloc((int)len)))
		return (NULL);
	_memcpy(copy, str, len);
	return (copy);
}

/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: destination pointer
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}

/**
 *  _strlen - finds the length of a string
 *  @s: pointer to string
 *  Return: the size of the string
**/

int _strlen(char *s)
{
	unsigned int sizecount = 0;

	while (*s != '\0')
	{
	sizecount++;
	s++;
	}
	return (sizecount);
}
