#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits.
 *
 *Return: void
 */

int main(void)
{
int d1 = 48, d2 = 49, d1s = 48, d2s = 49;

while (d1 < 56)
{

if (d2 > 57)
{
/* 56 */
d1s++;
/* 57 */
d2s++;
d1 = d1s;
d2 = d2s;
}
putchar(d1);
putchar(d2);
if (d1 == 56)
{
continue;
}
putchar(44);
putchar(32);
d2++;
}
putchar('\n');
return (0);
}
