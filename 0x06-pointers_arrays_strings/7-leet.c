
/**
 *leet - encodes a string into 1337.
 *@c: string
 *Return: char pointer
 */

char *leet(char *c)
{
int i;
for (i = 0; c[i]; i++)
{
if (c[i] == 'A' || c[i] == 'a')
c[i] = '4';
else if (c[i] == 'E' || c[i] == 'e')
c[i] = '3';
else if (c[i] == 'O' || c[i] == 'o')
c[i] = '0';
else if (c[i] == 'L' || c[i] == 't')
c[i] = '7';
else if (c[i] == 'L' || c[i] == 'l')
c[i] = '1';
}
return (c);
}
