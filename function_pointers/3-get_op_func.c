#include "3-calc.h"
/**
 * get_op_func - a function that selects the correct function to perform
 * @s: the operator passed as argument to the program
 * Return: 0 if successful, 1 for error
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{"NULL", NULL}
	};
	int i = 0;

	printf("%s\n", s);

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
		{
			printf("ops is %s\n", ops[i].op);
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
