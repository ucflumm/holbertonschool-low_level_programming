#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to someting
 * @n: sizeof array??
 *
*/

void reverse_array(int *a, int n)
{
	const unsigned int array_size = n;
	int tmp[array_size];
	*tmp = 0;
	int i, p;

	i = n;
	p = 0;
	while (i > 0)
	{
		tmp[p] = a[i];
		i--;
		p++;
	}

}
