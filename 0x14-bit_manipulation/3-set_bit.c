#include "main.h"

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
 *cpy_str - copies string
 *@src: the source string
 *@dest: the new string
 *@start: where to start copying from
 *Return: void
 */
void cpy_str(const char *src, char *dest, int start)
{
int i, j;
for (i = start, j = 0; src[i]; i++, j++)
dest[j] = src[i];
dest[j] = '\0';
}

/**
 *binary - converts int to binary
 *@n: u..d int
 *Return: binary string
 */
char *binary(unsigned long int n)
{
int i, j, bit, exp = 0, num, bits;
char *str;
num = (n / 2);
while (num)
{
num = (num / 2);
exp++;
}
bits = sizeof(n) * exp - (sizeof(n) * exp - exp);
str = malloc(sizeof(str) * (bits));

if (!str)
return (NULL);

for (i = bits, j = 0; i >= 0; i--, j++)
{
bit = (n >> i) & 1;
if (bit)
str[j] = '1';
else
str[j] = '0';
}
str[j] = '\0';

return (str);
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

/**
 *set_bit - the value of a bit to 1 at a given index.
 *@n: u..d int
 *@index: bit index
 *Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
char *bin = binary(*n), *ext_str;
unsigned int i, j;

if (strlen(bin) <= index)
{
ext_str = malloc(sizeof(ext_str) * ((index - strlen(bin)) + strlen(bin)));
if (!ext_str)
return (-1);

for (i = 0; i < (index - strlen(bin)) + 2; i++)
ext_str[i] = '0';
for (j = 0; i < ((index - strlen(bin)) + strlen(bin)); i++, j++)
ext_str[i] = bin[j];

bin = ext_str;
}

bin[(unsigned int)(strlen(bin) - 1 - index)] = '1';
*n = binary_to_uint(bin);

return (1);
}
