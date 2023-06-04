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
	int counter = 0;
	int i;
	int len = n;
	char empty = '\0';

	if (s1 == NULL)
		s1 = &empty;
	if (s2 == NULL)
		s2 = &empty;

	ptr = malloc_checked(sizeof(char) * (_strlen(s1) + len + 1));
	_memset(ptr, '\0', (sizeof(char) * (_strlen(s1) + len + 1)));
	if (arg_check(s1, s2, ptr, n))
		return (ptr);

	_memcpy(ptr, s1, _strlen(s1));
	ptr1 = &*ptr;
	while (*ptr != '\0')
	{
		ptr++;
		counter++;
	}
	for (i = 0; i < len; i++)
	{
		*ptr = s2[i];
		ptr++;
	}
	*ptr = '\0';
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
 * arg_check - checks args
 * @s1: string one
 * @s2: string 2
 * @s3: string 3
 * @n: number to check
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

#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to area
 * @b: byte to be filled
 * @n: number of bytes
 * Return: pointer to destination
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}

#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: memory to allocate
 * Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
