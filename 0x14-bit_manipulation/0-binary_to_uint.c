#include "main.h"
#include <string.h>
#include <math.h>

/**
 *cpy_str - copies string
 *@src: the source string
 *@dest: the new string
 *@start: where to start copying from
 *Return: void
 */
void cpy_str(const char *src, char *dest, int start)
{
int *bytes, i, j;
for (i = start, j = 0; src[i]; i++, j++)
dest[j] = src[i];
dest[j] = '\0';
}
/**
 *power - exponetiation
 *@base: the base number
 *@exponent: the exponent
 *Return: int
 */

int power(int base, int exponent)
{
int result = 1.0;
int i;
for (i = 0; i < exponent; i++)
{
result *= base;
}
return (result);
}
/**
 *charToInt - char to int
 *@c: character
 *Return: int
 */
int charToInt(char c)
{
return (c - '0');
}
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: a string of 0 and 1 chars
 *Return: u..d int or null
 */

unsigned int binary_to_uint(const char *b)
{
int *bytes, i, j, sum, start, len;
char *new_str;

if (!b)
return (0);
len = strlen(b);

start = 0;
for (i = 0; i < len; i++)
if (charToInt(b[i]) == 1)
{
start = i;
break;
}

new_str = malloc(sizeof(new_str) * (len - start));
if (!new_str)
return (-1);

cpy_str(b, new_str, start);

bytes = malloc(sizeof(bytes) * strlen(new_str));
if (!bytes)
return (-1);

for (i = strlen(new_str) - 1, j = 0; i >= 0; i--, j++)
bytes[j] = power(2, i);
sum = 0;

for (i = 0; bytes[i]; i++)
{
if (charToInt(new_str[i]) == 1)
sum += bytes[i];
else if (charToInt(new_str[i]) != 0)
{
sum = 0;
break;
}
}
return (sum);
}
