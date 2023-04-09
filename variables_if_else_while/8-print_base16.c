#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Defines for readability */
#define CHARRAY_SIZE 16
/**
 * main - prints all the numbers of base 16, followed by a new line
 * Return: 0 if successful, 1 for error
 */
int main(void)
{
	char c[CHARRAY_SIZE] = {0};
	int i = 0;
	char chx = '0';

	for (i = 0; i < CHARRAY_SIZE; i++)
	{
		if (i == 10)
		{
			chx = 0x61;
			c[i] = chx;
			chx++;
		}
		else
		{
			c[i] = chx;
			chx++;
		}
	}
	for (i = 0; i < CHARRAY_SIZE; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
