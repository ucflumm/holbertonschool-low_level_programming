#include "main.h"

/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 * Return: return 1 if yes 0 if no
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}
/**
 * is_prime_helper - core functionality of isprimenumber
 * @num: number passed through
 * @divisor: divisor to use
 * Return: result
*/
int is_prime_helper(int num, int divisor)
{
	if (divisor == 1)
		return (1);
	else if (num % divisor == 0)
		return (0);
	return (is_prime_helper(num, divisor - 1));

}
