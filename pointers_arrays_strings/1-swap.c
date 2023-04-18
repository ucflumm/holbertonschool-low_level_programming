#include "main.h"

/**
 * swap_int - takes 2 pointers and swaps their variables
 * @a: first pointer
 * @b: second pointer
 *
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
