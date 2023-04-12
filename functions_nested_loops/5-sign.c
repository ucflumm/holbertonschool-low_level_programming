#include "main.h"
/**
 * print_sign - takes an integer and outputs its polarity
 * @n: integer to be checked
 * Return: sign or '\0' on error
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
		return ('\0');
}
