#include "main.h"

/**
 * print_triangle - checks if int is a digit
 * @n: number to check
 * Return: 1 if digit 0 if not
 *
 */

void print_triangle(int n)
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
			for (m = n - i; m > 0; m--)
			{
				_putchar (' ');
			}
			for (m = n + i; m >= n; m--)
				_putchar ('#');
			_putchar ('\n');
		}
	}
}
