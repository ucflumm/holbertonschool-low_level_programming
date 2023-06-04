#include "main.h"

/**
 * alloc_grid - something it does
 * @width: something to point
 * @height: another argument
*/

int **alloc_grid(int width, int height)
{
	int i, n;
	int **arr = malloc(height * sizeof(int *));
	
	for(i = 0; i < height; i++) 
		arr[i] = malloc(width * sizeof(int));
	
	if (width <= 0 || height <= 0)
	{
		printf("Width or height is less than 1\n");
		return (NULL);
	}
	
	if (arr == NULL)
	{
		printf("Malloc Fail\n");
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			arr[i][n] = 0;
		}
	}

	return (arr);
}
