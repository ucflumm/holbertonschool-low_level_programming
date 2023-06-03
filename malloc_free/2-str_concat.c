#include "main.h"

/**
 * str_concat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to string
*/

char *str_concat(char *s1, char *s2)
{
	int len;
	char *concat;
	int counter = 0;
	int firstcount;
	char nullreplace = '\0';
	
	if (s1 == NULL)
		s1 = &nullreplace;
	if (s2 == NULL)
		s2 = &nullreplace; 
	len = _strlen(s1);
	len += _strlen(s2);
	len++;
	

	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);
	
	while (counter < _strlen(s1))
	{
		concat[counter] = s1[counter];
		counter ++;
	}

	firstcount = counter;
	counter = 0;
	do
	{
		concat[firstcount] = s2[counter];
		counter++;
		firstcount++;
	} while (firstcount < len);
	return (concat);
	
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
