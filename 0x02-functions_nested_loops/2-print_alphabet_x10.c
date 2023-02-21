#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, \
in lowercase, followed by a new line.
*
*Return: void
*/

void print_alphabet_x10(void)
{
int i,ascii;
for (i = 0; i < 10; i++)
for(ascii = 97; ascii < 123; ascii++)
_putchar(ascii);
_putchar('\n');
}
