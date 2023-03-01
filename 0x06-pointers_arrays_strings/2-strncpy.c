#include <string.h>

/**
 *_strncpy - copies a string.
 *@dest: new string
 *@src: source string
 *@n: number of bytes
 *Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, srclen = strlen(src);

for (i = srclen; i < n; i++)
dest[i] = '\0';
for (i = 0; i < n && src[i]; i++)
{
dest[i] = src[i];
}

return (dest);
}
