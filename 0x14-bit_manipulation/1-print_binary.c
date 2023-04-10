#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_binary - prints the binary representation of a number.
 *@n: u..d int
 *Return: void
 */
void print_binary(unsigned long int n)
{
int i, bit, exp = 0, num;
num = (n / 2);
while (num)
{
num = (num / 2);
exp++;
}
for (i = sizeof(n) * exp - (sizeof(n) * exp - exp); i >= 0; i--)
{
bit = (n >> i) & 1;
putchar(bit ? '1' : '0');
}
}
