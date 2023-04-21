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

	str_length = strlen(str);
		if (str_length % 2 == 0)
		{
			str_length = str_length / 2;
			str_length++;
		}
		else
		{
			str_length = str_length / 2;
		}
	/* printf("Str length = %d \n", str_length); */
	for (i = 0; i <= str_length; i++)
	{
		_putchar (*str);
		str += 2;
	}
	_putchar ('\n');
}
