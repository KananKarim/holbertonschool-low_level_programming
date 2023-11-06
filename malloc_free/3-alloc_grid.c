#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 * Return: If width or height is 0 or negative
 */


int **alloc_grid(int width, int height)
{
	int **grid, h_i, w_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (h_i = 0; h_i < height; h_i++)
	{
		grid[h_i] = malloc(width * sizeof(int));

		if (grid[h_i] == NULL)
		{
			while (h_i--)
			{
				free(grid[h_i]);
			}
			free(grid);
			return (NULL);
		}

		for (w_i = 0; w_i < width; w_i++)
		{
			grid[h_i][w_i] = 0;
		}
	}

	return (grid);
}
