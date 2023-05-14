#include "main.h"

/**
 * is_prime_number - Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: 
 * Return: 
 * 
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return is_prime_helper(n, n - 1);
}

int is_prime_helper(int num, int divisor) 
{
    if (divisor == 1) 
    	return 1;
    else if (num % divisor == 0) 
        return 0;
    else 
        return is_prime_helper(num, divisor - 1);

}