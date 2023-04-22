#include "main.h"

/**
 * print_array - prints n elements of an array
 * @n: number of elements to print
 * @a: pointer to arrray
 *
*/

void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		printf('\n\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
}
