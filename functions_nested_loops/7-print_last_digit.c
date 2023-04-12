#include "main.h"
/**
 * print_last_digit - check absolute value of ;
 * @i - integer to be checked 
 * Return: absolute value
 **/

int print_last_digit(int i)
{
	i = 10 % i;
	_putchar(i);
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	return (i);
}