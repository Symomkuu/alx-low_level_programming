#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees a two dimensional grid
 *@grid: input arraay
 *@height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
