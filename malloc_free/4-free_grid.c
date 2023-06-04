#include "main.h"

/**
 * free_grid - frees memory allocated in the previous task
 * @grid: pointer to grid to free
 * @height: height of grid
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
