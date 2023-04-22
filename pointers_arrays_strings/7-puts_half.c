#include "main.h"

/**
 * puts_half - puts half a string followed by a newline
 * @str: string to put half
 *
 *
*/

void puts_half(char *str)
{
	int str_length;

	str_length = strlen(str);
	if (str_length % 2 != 0)
	{
		str_length--;
	}
	str_length = str_length / 2;

	str += str_length;
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');

}
