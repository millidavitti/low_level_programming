#include <string.h>

/**
 *_strspn - gets the length of a prefix substring.
 *@s: char
 *@accept: char set to match
 *Return: usninged int
 */

unsigned int _strspn(char *s, char *accept)
{
int len = strspn(s, accept);
return (len);
}
