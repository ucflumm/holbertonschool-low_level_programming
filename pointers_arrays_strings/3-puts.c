#include "main.h"

/**
 * 
 * _puts - prints a string.
 * @str: pointer to that string
 * 
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
}