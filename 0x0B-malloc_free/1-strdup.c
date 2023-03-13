#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated \
space in memory, which contains a copy of the \
string given as a parameter.
*@str: string*
*Return: char*
*/

char *_strdup(char *str)
{
int len, i;
char *cpy;
if (str == NULL)
return (NULL);
len = strlen(str);
cpy = (char *)malloc(sizeof(char) * len + 1);
if (!cpy)
return (NULL);
for (i = 0; i < len; i++)
*(cpy + i) = str[i];

return (cpy);
}
