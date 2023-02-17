#include <stdio.h>

/**
 *main - prints all possible combinations of single-digit numbers.
 *
 *Return: int
 */

int main(void)
{
int num = 48;

while (num < 58)
{
putchar(num);
putchar(44);
num++;
if (num == 56)
continue;
putchar(32);
}
putchar('\n');
return (0);
}
