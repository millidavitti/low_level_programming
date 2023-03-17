#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: void*
 *@old_size: u int
 *@new_size: u int
 *Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  unsigned int *new_block, i;
if (new_size > old_size)
new_block = malloc(old_size + new_size);
else if (ptr == NULL)
{
new_block = malloc(new_size);
if (!new_block)
return (NULL);
return (new_block);
}
else if (new_size == old_size)
return (ptr);
else if (!new_size && ptr)
{
free(ptr);
return (NULL);
}

if (!new_block)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
new_block[i] = ((char *)ptr)[i];
free(ptr);
return (new_block);
}
