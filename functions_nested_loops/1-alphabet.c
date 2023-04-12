/**
* print_alphabet - prints the alphabet
**/
#include main.h

#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122

void print_alphabet(void)
{
	int i;

	for (i = ASCII_LOWER_A; i <= ASCII_LOWER_Z; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}