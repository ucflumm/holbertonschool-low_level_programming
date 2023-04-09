#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Define 0 and 10 ascii code */
#define A0 48
#define A10 58
/**
 * main - randomise an int and prints if +,- or zero
 * Return: 0 if successful, 1 for error
 */
int main(void)
{
	int i = 0;

	for (i = A0; i < A10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
