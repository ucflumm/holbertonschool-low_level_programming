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
	int tmparray[20] = {0};
	int i = n - 1;
	int p = 0;
	
	while (i > 0)
	{
		tmparray[p] = a[i];
		i--;
		p++;
	}
	
	i = n - 1;
	p = 0;
	while (i > 0)
	{
		*a = tmparray[p];
		a++;
		i--;
		p++;
	}
}