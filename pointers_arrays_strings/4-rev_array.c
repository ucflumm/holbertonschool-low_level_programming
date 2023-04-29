#include "main.h"
#include <stdlib.h>
/** 
 * reverse_array - reverses array 
 * @a: pointer to someting
 * @n: sizeof array??
 * 
*/

void reverse_array(int *a, int n)
{
	int *tmparray = malloc(n * sizeof(int));
	int i = n;
	int p = 0;
	
	while (i => 0)
	{
		tmparray[p] = a[i];
		i--;
		p++;
	}
}