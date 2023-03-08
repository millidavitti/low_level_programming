#include <string.h>
/**
 *pal - returns 1 if a string is a palindrome and 0 if not.
 *@s: string
 *@first: pointer to the first char
 *@last: pointer to the last char
 *Return: integer
 */

int pal(char *s, char *first, char *last)
{
if (*last != *first)
return (0);
else if ((last - first) < 2)
return (1);
return (pal(s, first + 1, last - 1));
}
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string
 *Return: integer
 */
int is_palindrome(char *s)
{
char *f = s;
char *l = s + strlen(s) - 1;
return (pal(s, f, l));
}
