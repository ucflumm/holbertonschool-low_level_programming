#include "main.h"

/**
 * print_chessboard - prints chessboard 
 * @a: pointer to array
 * 
*/

void print_chessboard(char (*a)[8])
{
	int i, n;

	n = 0;
	while (n < 8)
	{
		for (i = 0; i < 8; i++)
		{
				_putchar(a[n][i]);
		}
		_putchar('\n');
		n++;
	}
}