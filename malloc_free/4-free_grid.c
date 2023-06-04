#include "main.h"

/**
 * free_grid - something it does
 * @grid: something to point
 * @height: height of something
*/

void free_grid(int **grid, int height)
{
	int i = 0;
	
	if (grid != NULL && height > 0)
	{
		while (i <= height)
		{
			free(grid[i]);
			i++;
		}
			free(grid);
	}
}
