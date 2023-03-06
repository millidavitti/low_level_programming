#include <string.h>

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: char
 *@accept: char set
 *Return: char*
 */

char *_strpbrk(char *s, char *accept)
{
char *ptr = strpbrk(s, accept);
return (ptr);
}
