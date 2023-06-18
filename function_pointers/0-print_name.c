#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - does something?
 * Return: 0 if successful, 1 for error
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

}
