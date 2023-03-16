#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: char*
 *@s2: char*
 *@n: u int
 *Return: char*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len, len2, mark;
char *str;
if (!s1)
s1 = "";
else if (!s2)
s2 = "";
/*len - s1*/
for (i = 0, len = 0; s1[i]; i++)
len++;
/*len - s2*/
for (i = 0, len2 = 0; s2[i]; i++)
len2++;

if (n >= len2)
n = len2;

str = malloc(sizeof(*str) * (n + len) +1);

if (!str)
return (NULL);

/*copying s1*/
for (i = 0, mark = 0; i < len; i++)
{
str[mark] = s1[i];
mark++;
}

/*copying s2*/
for (i = 0; i < n; i++)
{
str[mark] = s2[i];
mark++;
}
str[mark] = '\0';

return (str);
}
