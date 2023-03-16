#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: u int
 *Return: voif
 */

void *malloc_checked(unsigned int b)
{
int *num = malloc(sizeof(*num) * b);
if (!num)
return (NULL);
return (num);
}
