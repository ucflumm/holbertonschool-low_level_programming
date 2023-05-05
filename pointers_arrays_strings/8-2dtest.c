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
	int *ptr, *ptr2;
	unsigned int count = 0;
	/*int count = 0;*/
	ptr = a;

	for (n = 0; n < size; n++)
	{
		printf("1pointer is %d \n", *ptr);
		count += *ptr;
		ptr++;
		ptr += size;
	}

	ptr2 = a;
	printf("ptr 2 equals %d\n", ptr2[0]);
	ptr2 += ((sizeof(int) * (size - 1)));
	count = 0;
	printf("ptr 2 equals %d\n", ptr2[0]);
	for (n = 0; n < size; n++)
	{
		printf("2pointer is %d \n", *ptr2);
		count += *ptr2;
		ptr2++;
		ptr2 -= size;
		
	}
}