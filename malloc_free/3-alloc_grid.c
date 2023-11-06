#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates mem
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Pointer to int or NULL
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	int **grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
