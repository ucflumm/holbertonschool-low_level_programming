/**
* print_alphabet - prints the alphabet
**/
#include "main.h"

#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122

void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
        	for (i = ASCII_LOWER_A; i <= ASCII_LOWER_Z; i++)
		{
		putchar(i);
		}
		_putchar('\n');
	}

}
