#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: something
*/
#define PRINT_TO_98 98

void print_to_98(int n)
{
	int tmp;

	if (n == PRINT_TO_98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else
	{
		while (n != PRINT_TO_98)
		{
			if (n < PRINT_TO_98)
			{
				if (n == 0)
				{
					_putchar ('0');
					_putchar (',');
					_putchar (' ');
					n++;
				}
				else if (n == -10)
				{
					_putchar ('-');
					_putchar ('1');
					_putchar ('0');
					_putchar (',');
					_putchar (' ');
					n++;
				}
				else if (n < 0)
				{
					_putchar('-');
					tmp = n * -1;
					_putchar (tmp + '0');
					_putchar (',');
					_putchar (' ');
					n++;
				}
				else if (n < 10)
				{
					_putchar (n + '0');
					_putchar (',');
					_putchar (' ');
					n++;
				}
				else if (n > 9)
				{
					tmp = n / 10;
					_putchar (tmp + '0');
					tmp = n % 10;
					_putchar (tmp + '0');
					_putchar (',');
					_putchar (' ');
					n++;
				}
			}
			else if (n > PRINT_TO_98)
			{
				if (n > 99)
				{
					tmp = n / 100;
					_putchar (tmp + '0');
					tmp = n / 10;
					tmp = tmp % 10;
					_putchar (tmp + '0');
					tmp = n % 10;
					_putchar (tmp + '0');
					_putchar (',');
					_putchar (' ');
					n--;
				}
				else
				{
					tmp = n / 10;
					_putchar (tmp + '0');
					tmp = n % 10;
					_putchar (tmp + '0');
					_putchar (',');
					_putchar (' ');
					n--;
				}
			}

		}
		_putchar ('9');
		_putchar ('8');
		_putchar ('\n');
	}
}
