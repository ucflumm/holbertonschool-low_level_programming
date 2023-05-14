#include "main.h"

/**
 * _sqrt_recursion -  Write a function that returns the natural square root of a number.
 * @n: 
 * Return: 
 * 
*/
int _sqrt_recursion(int n)
{
	return (findSqrt(n, 1, n));
}
int findSqrt(int n, int start, int end)
{
	double mid = (start + end) / 2;
	
	if (start > end)
		return (-1);
	if (mid * mid == n)
		return (mid);
	else if ((mid * mid) > n)
		return (findSqrt(n, start, (mid -1)));
	else
		return (findSqrt(n, mid + 1, end));
}