#include "3-calc.h"

/**
 * main - Entry point
 * 
 * Return: 0 if successful, 1 for error
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	printf("arg 2 = %s\n", argv[2]);
	printf("arg 1 = %s\n", argv[1]);
	printf("arg 3 = %s\n", argv[3]);
	if (argc != 4)
	{
		printf("Error arg does not  = 4\n");
		return (1);
	}
	
	if (argv[2] == NULL)
	{
		printf("Error argv[2] = NULL\n");
		return (1);
	}

	printf("%d\n", (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
