#include "main.h"

/**
 * print_square - checks if int is a digit
 * @n: number to check
 * Return: 1 if digit 0 if not
 *
 */

void print_square(int n)
{
	int i, c;
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < n; c++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}	
}
