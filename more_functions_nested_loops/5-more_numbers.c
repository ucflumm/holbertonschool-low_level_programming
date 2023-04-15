#include "main.h"

#define ASCII_DIGIT_LOWER 48
#define ASCII_DIGIT_UPPER 57

/**
 * print_numbers - checks if int is a digit
 * Return: 1 if digit 0 if not
 **/

void more_numbers(void)
{
	char a[10] = {'0','1','2','3','4','5','6','7','8','9'};
	char b[11] = {49,48,49,49,49,50,49,51,49,52,'\n'};
	int i, n, m; 
	
	for (m = 0; m <= 10; m++)
	{
		for (i = 0; i < 10; i++)
			_putchar (a[i]);
		for (n = 0; n < 11; n++)
			_putchar (b[n]);
	}
}
