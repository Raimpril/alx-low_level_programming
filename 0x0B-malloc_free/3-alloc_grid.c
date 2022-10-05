#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid make and free space
 * @width: measures width of grid
 * @height: grid height
 * Return: Return unit of free space in grid
 */

int **alloc_grid(int width, int height)
{
int i, j, a, b;
int **p;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
p = (int **) malloc(height * sizeof(int *));
/* make a malloc per pointers*/
if (!p)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = (int *) malloc(width * sizeof(int));
if (!p[i])
{
for (j = 0; j <= i; j++)
free(p[j]);
free(p);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
p[a][b] = 0;
}
}
return (p);
}
}
