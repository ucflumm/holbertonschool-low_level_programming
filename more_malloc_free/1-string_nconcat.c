#include "main.h"

/**
 * string_nconcat - something the function
 * @s1: something the doing
 * @s2: something the doing
 * @n: some sort of int
 * Return: something the doing
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *ptr1;
	/* int counter = 0; */
	int len = n;
	char empty = '\0';

	if (s1 == NULL)
		s1 = &empty;
	if (s2 == NULL)
		s2 = &empty;
	
	ptr = malloc_checked(sizeof(char) * (len + 1));
	if (arg_check(s1, s2, ptr, n))
	{
		puts("condition ran true!");
		return (ptr);
	}

	_memcpy(ptr, s1, (_strlen(s1) + 1));
	ptr1 = &*ptr;
	while (*ptr != '\0')
		ptr++;
	_memcpy(ptr, s2, (n + 1));
	return (ptr1);
	
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
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: destination pointer
 *
*/

int arg_check(char *s1, char *s2, char *s3, unsigned int n)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		*s3 = '\0';
		return (1);
	}
	if (*s1 == '\0' && n == 0)
	{
		*s3 = '\0';
		return(1);
	}
	else
		return (0);
}
