#include "main.h"

/**
 * free_grid - to free up previously allocated space
 * @grid: the grid to be freed
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
