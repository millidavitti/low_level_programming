#include <stddef.h>
#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid previously \
created by your alloc_grid function.
*@grid:  2d array
*@height: 2d array length
*Return: void
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
