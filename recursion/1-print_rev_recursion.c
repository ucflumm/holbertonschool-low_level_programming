#include "main.h"

/**
 * _print_rev_recursion - recursively call puts in reverse
 * @s: pointer to string
 *
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	putchar(*s);
}
