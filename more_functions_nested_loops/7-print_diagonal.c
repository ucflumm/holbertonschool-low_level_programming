#include "main.h"

/**
 * print_line - checks if int is a digit
 * @n: number to check
 * Return: 1 if digit 0 if not
 *
 */

void print_diagonal(int n)
{
	int i, m;
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (m = i; m > 0; m--)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}	
}
