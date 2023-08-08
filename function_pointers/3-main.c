#include "3-calc.h"

/**
 * main - Entry point
 * 
 * Return: 0 if successful, 1 for error
 */
int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	if (argv[2] == NULL)
	{
		printf("Error argv[2] = NULL\n");
		return (1);
	}
	
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
