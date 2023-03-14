#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: int
 *@height: int
 *Return: **ptr
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **xmalloc, *ymalloc;

if (!width || !height)
return (NULL);

xmalloc = (int **)malloc(sizeof(int *) * height);

if (!xmalloc)
{
free(xmalloc);
return (NULL);
}
for (i = 0; i < height; i++)
{
ymalloc = (int *)malloc(sizeof(int) * width);
*(xmalloc + i) = ymalloc;

for (j = 0; j <= width; j++)
{
*(ymalloc + j) = 0;
}
}

return (xmalloc);
}
