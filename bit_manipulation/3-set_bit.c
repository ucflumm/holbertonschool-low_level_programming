#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be set
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	/* Sanity check making sure index is within n*/
	if (index > sizeof(n) * 8)
		return (-1);

	/* Shift 1 index times and OR it with n*/
	*n |= 1 << index;
	return (1);
}
