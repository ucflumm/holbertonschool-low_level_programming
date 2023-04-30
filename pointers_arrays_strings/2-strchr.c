#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: source pointer
 * @c: char to search for
 * Return: destination pointer
 *
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
		return ((char *)s);
		}
	} while (*s++);
	return (0);
}
