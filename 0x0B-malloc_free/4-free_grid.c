#include "main.h"

/**
 * free_grid - free 2D grid
 * @grid: pointer to memory block
 * @height: array height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
