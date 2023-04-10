#include "main.h"

/**
 *binary - converts int to binary string
 *@n: integer
 *Return: string
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
 *get_bit - returns the value of a bit at a given index.
 *@n: int
 *@index: the bit index
 *Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
char *rep = binary(n);
char index_char = rep[index];
if (!index_char)
return (-1);
return (index_char - '0');
}
