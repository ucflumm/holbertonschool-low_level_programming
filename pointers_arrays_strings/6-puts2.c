#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: pointer to string
 *
 *
*/

void puts2(char *str)
{
	int i, str_length;

	str_length = (strlen(str) / 2);
	for (i = 0; i < str_length; i++)
	{
		_putchar (*str);
		str += 2;
	}
	_putchar ('\n');
}
