#include <stdio.h>
#include "main.h"

#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122
/**
* print_alphabet - prints the alphabet
**/
void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for (i = ASCII_LOWER_A; i <= ASCII_LOWER_Z; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
/**
* main - does something
* Return: 0 (hopefully :SSS)
*
**/

int main(void)
{
	print_alphabet();
	return (0);
}
