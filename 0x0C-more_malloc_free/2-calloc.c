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
if (!nmemb || !size)
return (NULL);
arr = malloc(size * nmemb);
if (!arr)
return (NULL);

memset(arr, 0, nmemb * size);

return (arr);
}
