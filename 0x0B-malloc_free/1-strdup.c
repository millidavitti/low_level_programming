#include <string.h>
#include <stdder.h>
/**
 *_strdup - returns a pointer to a newly allocated \
space in memory, which contains a copy of the \
string given as a parameter.
*@str: string*
*Return: char*
*/

char *_strdup(char *str)
{
int len = strlen(str), i;
char *cpy;
if (*str == '\0')
return (NULL);
cpy = (char *)malloc(sizeof(char) * len);

for (i = 0; i < len; i++)
*(cpy + i) = str[i];

return (cpy);
}
