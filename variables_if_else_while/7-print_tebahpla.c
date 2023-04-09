#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Define lower and upper variables for alphabet */
#define ASCII_LOWER_A 97
#define ASCII_LOWER_Z 122
/**
 * main - randomise an int and prints if +,- or zero
 * Return: 0 if successful, 1 for error
 */
int main(void)
{
	int i = 0;

	for (i = ASCII_LOWER_Z; i >= ASCII_LOWER_A; i--)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
