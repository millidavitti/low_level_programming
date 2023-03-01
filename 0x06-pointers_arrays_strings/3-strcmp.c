#include <string.h>

/**
 *_strcmp - compares two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
int i, s1len = strlen(s1), s2len = strlen(s2);
  
for (i = 0; s1[i]; i++)
{
if (s1[i] != s2[i])
{
if (s1len > s2len)
return 15;
else if (s1len < s2len)
return -15;
}
}
return (0);
}
  
