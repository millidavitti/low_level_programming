#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *str_concat - concatenates two strings.
 *@s1: string*
 *@s2: string*
 *Return: string
 */

char *str_concat(char *s1, char *s2)
{
int i, len;
char *concat;
if (s1 == NULL && s2 == NULL)
return (NULL);
else if (s1 == NULL)
s1 = "";
else if (s2 == NULL)
s2 = "";
concat = (char *)malloc(sizeof(char) * (strlen(s2) + strlen(s1) + 1));
if (!concat)
return (NULL);
for (i = 0; s1[i]; i++)
concat[i] = s1[i];
for (i = 0; s2[i]; i++)
concat[i + strlen(s1)] = s2[i];
return (concat);
}
