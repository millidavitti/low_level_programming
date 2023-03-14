#include <string.h>
#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: argc
 *@av:argv
 *Return: char*
 */

char *argstostr(int ac, char **av)
{
int i, j, len = 0, mark = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
len += (int)strlen(av[i]);
}

str = (char *)malloc(sizeof(char *) * (len + 1));

for (i = 0; i < ac; i++)
{
++mark;
for (j = 0; av[i][j]; j++)
{
str[j + mark] = av[i][j];
}
mark = mark + j;
str[mark] = '\n';
}
return (str);
}
