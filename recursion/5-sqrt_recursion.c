#include "main.h"

/**
 * _sqrt_recursion -  Returns the natural square root of a number.
 * @n: number to check
 * Return: natural square root or -1 if error
*/
int _sqrt_recursion(int n)
{
	return (findSqrt(n, 1, n));
}
/**
 * findSqrt - core functionality of sqrt recursion
 * @n: number passed from sqrt recursion
 * @start: starting number
 * @end: ending number
 * Return: square root answer
*/
int findSqrt(int n, int start, int end)
{
	double mid = (start + end) / 2;

	if (start > end)
		return (-1);
	if (mid * mid == n)
		return (mid);
	else if ((mid * mid) > n)
		return (findSqrt(n, start, (mid - 1)));
	else
		return (findSqrt(n, mid + 1, end));
}
