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