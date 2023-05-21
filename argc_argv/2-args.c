#include "main.h"

/**
 * main - main of 2args
 * @argc: number of args
 * @argv: vector
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int c = 0;

	while (c < argc)
	{
		puts(argv[c]);
		c++;
	}
	
	return (0);
}
