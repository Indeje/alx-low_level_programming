#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory grid for 2D array of integer
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to grid if successful, else NULL
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (0);

	ptr = (int **) malloc(sizeof(int) * height);

	if (ptr)
	{
		for (; i < height; i++)
		{
			ptr[i] = (int *) malloc(sizeof(int) * width);

			if (ptr[i])
			{
				for (j = 0; j < width; j++)
					ptr[i][j] = 0;
			}
			else
			{
				for (; i >= 0; i--)
					free(ptr[i]);

				free(ptr);

				return (0);
			}
		}

		return (ptr);
	}

	return (0);
}
