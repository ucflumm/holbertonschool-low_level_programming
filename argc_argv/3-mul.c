#include "main.h"

/**
 * main - main of whatsmyname
 * @argc: number of args
 * @argv: vector
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
