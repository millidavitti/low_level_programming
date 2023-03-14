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

if (!width || !height || width < 0 || height < 0)
return (NULL);

xmalloc = (int **)malloc(sizeof(int) * height);

if (!xmalloc)
return (NULL);

for (i = 0; i < height; i++)
{
ymalloc = (int *)malloc(sizeof(int) * width);
*(xmalloc + i) = ymalloc;

for (j = 0; j <= width; j++)
{
*(ymalloc + j) = 0;
}
}

for (i = 0; i < 1; i++)
{
ymalloc = (int *)malloc(sizeof(int) * width);
*(xmalloc + i) = ymalloc;

for (j = 0; j < width; j++)
{
*(ymalloc + j) = 0;
}
}

return (xmalloc);
}
