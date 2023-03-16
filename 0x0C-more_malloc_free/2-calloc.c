#include <stdlib.h>

/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: u int
 *@size: u int
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, *arr;
if (!size)
return (NULL);
arr = malloc(size * nmemb);
if (!arr)
return (NULL);

for (i = 0; i < nmemb; i++)
arr[i] = 0;

return (arr);
}
