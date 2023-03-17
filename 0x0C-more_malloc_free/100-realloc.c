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
unsigned int *new_block;
if (new_size > old_size)
new_block = malloc(old_size + new_size);
else if (ptr == NULL)
return (malloc(new_size));
else if (new_size == old_size)
return (ptr);
else if (!new_size && ptr)
{
free(ptr);
return (NULL);
}

if (!new_block)
return (NULL);

free(ptr);
return (new_block);
}
