#include <string.h>

/**
 *_memset - fills memory with a constant byte.
 *@s: char
 *@b: char
 *@n: unsigned int
*Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
if (n > strlen(s))
i = strlen(s) - 2;
for (i = n; i > 0; i--)
{
s[i] = b;
}
return (s);
}
