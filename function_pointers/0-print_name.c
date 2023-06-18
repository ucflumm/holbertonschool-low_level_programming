#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - does something?
 * @name: pointer to name
 * @f: function passed through
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

}
