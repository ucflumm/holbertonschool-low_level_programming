#include "main.h"

/**
 * alloc_grid - allocates space for 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
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
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	if (width <= 0 || height <= 0)
	{
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
