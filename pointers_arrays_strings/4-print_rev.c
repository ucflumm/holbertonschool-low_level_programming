#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 *
 *
*/

void print_rev(char *s)
{
	int str_length, i;

	str_length = strlen(s);
	str_length--;
	s = s + str_length;

	for (i = str_length; i >= 0; i--)
	{
		_putchar (*s);
		s--;
	}
	_putchar ('\n');
}
