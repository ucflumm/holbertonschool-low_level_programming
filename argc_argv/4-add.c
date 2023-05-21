#include "main.h"

/**
 * main - main of whatsmyname
 * @argc: number of args
 * @argv: vector
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int c, result;
	
	c = 1;
	result = 0;
	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	while (c != argc)
	{
		if (!isdigit(*argv[c]))
		{
			puts("Error");
			return (1);
		}
		result += atoi(argv[c]);
		c++;
		
	}
	printf("%d\n", result);
	return (0);
}
