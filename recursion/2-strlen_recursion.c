#include "main.h"

/**
 * _strlen_recursion -  Write a function that returns the length of a string.
 * @s: string to count
 * Return: current count
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
