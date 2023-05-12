#include "main.h"

/**
 * _strlen_recursion -  Write a function that returns the length of a string.
 * @n: 
 * Return: 
 * 
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		s++;
		count++;
		count += _strlen_recursion(s);
	}

	return (count);
}