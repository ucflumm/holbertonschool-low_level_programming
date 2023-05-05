#include "main.h"

/**
 * print_diagsums - prints diagonal sums
 * @a: pointer to array
 * @size: int size
 *
*/

void print_diagsums(int *a, int size)
{
	int * const start_reference = a;
	int count1, count2, n;

	count1 = 0;
	count2 = 0;
	n = 0;

	while (n < size)
	{
		count1 += *a;
		n++;
		a += (size + 1);
	}

	printf("%d, ", count1);
	a = start_reference;

	a += size - 1;

	while (n > 0)
	{
		count2 += *a;
		a += (size - 1);
		n--;
	}
	printf("%d\n", count2);


}
