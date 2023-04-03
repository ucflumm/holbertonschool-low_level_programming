#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - randomise an int and prints if +,- or zero
 * Return: 0 if successful, 1 for error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
