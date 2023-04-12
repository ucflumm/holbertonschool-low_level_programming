#include "main.h"
/**
 * _abs - check absolute value of ;
 * @i: integer to be checked
 * Return: absolute value
 **/

int _abs(int i)
{
	int n;

	if (i < 0)
	{
		n = i * -1;
		return (n);
	}
	return (i);
}
