#include <stdio.h>
#include "main.h"

/**
* main - does something
* Return: 0 (hopefully :SSS)
*
**/

int main(void)
{
	char c[] = "_putchar\n";
	unsigned int i;

	for (i = 0; i < (sizeof(c)-1); i++)
	{
	_putchar(c[i]);
	}
	return (0);
}
