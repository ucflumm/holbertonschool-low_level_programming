#include "main.h"
#include <stdio.h>
/*Defines for readability*/
#define ARRAY_SIZE 10

/*
* times_tables - prints a 10x10 grid of the times tables
*/

void times_table(void)
{
	/* int dimension_array[2D_ARRAY_SIZE][2D_ARRAY_SIZE]; */
	int i, j, result;
	char int_str[5] ={' ', ' ', ' ', ' ', ' ',};
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		for (j = 0; j < ARRAY_SIZE; j++)
		{
			result = i*j;
			sprintf (int_str, "%d", result);
			if (int_str[1] == 0)
				_putchar (' ');
			_putchar (int_str[0]);
			if (int_str[1] != 0)
				_putchar (int_str[1]);
			if (j != 9)
			{
				_putchar (',');
				_putchar(' ');
			}

		}
		_putchar ('\n');
	}

}