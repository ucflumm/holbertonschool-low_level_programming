#include "main.h"

#define ASCII_DIGIT_LOWER 48
#define ASCII_DIGIT_UPPER 57

/**
 * print_most_numbers - checks if int is a digit
 * Return: 1 if digit 0 if not
 **/

void print_most_numbers(void)
{
	int i;

	for (i = ASCII_DIGIT_LOWER; i <= ASCII_DIGIT_UPPER; i++)
		if (i != 50 && i != 52)
			_putchar (i);
	_putchar ('\n');
}
