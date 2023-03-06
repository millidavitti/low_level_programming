#include <string.h>

/**
 *_memcpy - copies memory area.
 *@dest: char pointer
 *@src: char pointer
 *@n: unsignd int
 *Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
