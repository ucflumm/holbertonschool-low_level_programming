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
		printf("tmp array %d\n", tmparray[p]);
	}
	
	printf("tmp array 0 = %d\n", *tmparray);
	i = n;
	p = 0;
	while (i > 0)
	{
		*a = tmparray[p];
		a++;
		i--;
		p++;
	}
}