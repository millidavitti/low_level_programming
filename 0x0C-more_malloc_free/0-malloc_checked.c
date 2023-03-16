#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: u int
 *Return: voif
 */

void *malloc_checked(unsigned int b)
{
void *num = malloc(b);
if (!num)
exit(98);
return (num);
}
