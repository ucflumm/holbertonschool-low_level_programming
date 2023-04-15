#include "main.h"

/**
 * print_line - checks if int is a digit
 * @n: number to check
 * Return: 1 if digit 0 if not
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		while (n != 0)
		{
			_putchar ('_');
			n--;
		}
		_putchar ('\n');
	}

}
