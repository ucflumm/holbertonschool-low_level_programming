#include "main.h"

/**
 * puts_recursion -  recursively call puts
 * @s: pointer to string
 * 
 * 
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}