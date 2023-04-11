#include "main.h"
/**
 * free_grid - frees a 2-D grid
 * @grid: ptr to 2-D grid
 * @height: no of rows
 * Return: NADA :> Just frees memory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
