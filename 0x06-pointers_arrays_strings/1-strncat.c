#include <string.h>

/**
 *_strncat - concatenates two strings.
 *@dest: new string
 *@src: old string
 *@n: number of bytes frm the old string
 *Return: concatention
 */

char *_strncat(char *dest, char *src, int n)
{
int i, destlen = strlen(dest);

for (i = 0; i < n && src[i]; i++)
{

dest[destlen] = src[i];
destlen++;
}
return (dest);
}
