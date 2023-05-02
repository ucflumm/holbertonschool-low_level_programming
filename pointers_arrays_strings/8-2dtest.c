#include "main.h"

/**
 * print_diagsums - prints diagonal sums 
 * @a: pointer to array
 * @s: int size
 * 
*/

void print_diagsums(int *a, int size)
{
	int n;
	int count = 0;
	int visual = 0;
	int *ptr;

	for (n = 0; n < size; n++)
	{
		ptr = a;
		printf("src element = %d \n", *ptr);
		count += *ptr;
		ptr++;
		if ((size * n) != 0)	
		{
			visual = size * n;
			printf("visual = %d\n", visual);
			ptr += visual;
		}
		else
			ptr += size;
		printf("n = %d \n", n);
		
		printf("count = %d \n", count);
	}
}