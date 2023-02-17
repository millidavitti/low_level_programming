#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 \
starting from 0, followed by a new line
*Return: int
*/

int main(void)
{
int num = 48;

while (num < 58)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
