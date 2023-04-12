#include "main.h"
/**
 * print_last_digit - check absolute value of ;
 * @i: integer to be checked
 * Return: absolute value
 **/
int print_last_digit(int i)
{

	if (i == 0)
	{
		_putchar(48);
		return (0);
	}

	i = i % 10;
	if (i < 0)
	{
		i = i * -1;
		_putchar(i + '0');
		return (i);
	}
	_putchar(i + '0');
	return (i);
}
