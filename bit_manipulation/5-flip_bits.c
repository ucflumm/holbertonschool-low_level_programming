#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	/* XOR n and m and count the number of 1s in the result*/
	for (i = 0; i < sizeof(n) * 8; i++)
		if (((n ^ m) >> i) & 1)
			count++;
	return (count);
}
