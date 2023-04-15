#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: someting
*/

void print_to_98(int n)
{
	int tmp, i;
	char int2str[13] = {0};

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			sprintf(int2str, "%d, ", i);
			for (tmp = 0; tmp < 6; tmp++)
			{
				if (int2str[tmp] != '\0')
					_putchar (int2str[tmp]);
			}
		}
		_putchar ('9');
		_putchar ('8');
		_putchar ('\n');
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			sprintf(int2str, "%d, ", i);
			for (tmp = 0; tmp < 6; tmp++)
			{
				if (int2str[tmp] != '\0')
					_putchar (int2str[tmp]);
			}
		}
		_putchar ('9');
		_putchar ('8');
		_putchar ('\n');
	}
	else
	{
		_putchar ('9');
		_putchar ('8');
		_putchar ('\n');
	}
}
