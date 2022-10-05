#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: get value of width of grid
 * @height: height of grid
 * Return: Return free grid
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
