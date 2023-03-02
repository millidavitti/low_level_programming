
/**
 *cap_string - capitalizes all words of a string.
 *@c: String
 *Return: string pointer
 */

char *cap_string(char *c)
{
int i;
for (i = 0; c[i]; i++)
{
if (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' || c[i] == '.' ||
c[i] == ';' || c[i] == ',' || c[i] == '!' || c[i] == '"' ||
c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}' ||
c[i] == '?')
{
if (*(c + (i + 1)) >= 97 && *(c + (i + 1)) <= 122)
*(c + (i + 1)) = *(c + (i + 1)) - 32;
}
}
return (c);
}
