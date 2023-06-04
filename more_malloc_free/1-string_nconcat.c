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
	char *ptr;
	int counter = 0;
	int counter2 = 0;
	int len = 0;
	char nullreplace = '\0';
	int nsigned = n;
	

	if (s1 == NULL)
		s1 = &nullreplace;
	if (s2 == NULL)
		s2 = &nullreplace;
	if (_strlen(s2) < nsigned)
		len = _strlen(s2) + _strlen(s1);
	else
		len = _strlen(s1) + n;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	
	while (counter < _strlen(s1))
	{
		ptr[counter] = s1[counter];
		/* printf("s1 is %c\n", s1[counter]); */
		counter++;
	}

	counter2 = counter;
	counter = 0;
	do {
		ptr[counter2] = s2[counter];
		/* printf("s2 is %c\n", s2[counter]); */
		counter++;
		counter2++;
	} while (counter < (len - _strlen(s1)));

	if (*s2 != '\0') 
		ptr[counter2] = '\0';
	return (ptr);
	
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