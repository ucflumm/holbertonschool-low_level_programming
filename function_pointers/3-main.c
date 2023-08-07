#include "3-calc.h"

/**
 * main - Entry point
 * 
 * Return: 0 if successful, 1 for error
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	printf("%s\n", argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("");

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
