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
	
	if (arr == NULL)
	{
		printf("Malloc FAILED!\n");
		free(arr);
		return (NULL);
	}
	for(i = 0; i < height; i++)
	{ 
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			return (NULL);
		}
	}
	if (width <= 0 || height <= 0)
	{
		printf("Width or height is less than 1\n");
		free(arr);
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
