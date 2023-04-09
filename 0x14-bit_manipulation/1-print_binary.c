#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 *print_binary - prints the binary representation of a number.
 *@n: u..d int
 *Return: void
 */
void print_binary(unsigned long int n)
{
int exp = 0, i, num;
char *binary;

num = (n / 2);
while (num)
{
num = (num / 2);
exp++;
}

binary = malloc(sizeof(binary) * (exp + 1));

if (!binary)
return;

for (i = 0; i < exp + 1; i++)
binary[i] = '0';
binary[i] = '\0';

num = n, i = 0;
while (num)
{
if (num < power(2, exp))
{
exp--;
continue;
}

num = num - power(2, exp);
binary[strlen(binary) - exp - 1] = '1';
i++;
}

printf("%s", binary);
}
