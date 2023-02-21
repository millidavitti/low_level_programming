#include "_putchar.c"

/**
 *print_alphabet - prints the alphabet, in lowercase, \
followed by a new line.
*
*Return: void
*/

void print_alphabet(void)
{
int ascii;
for (ascii = 97; ascii < 123; ascii++)
{
_putchar(ascii);
}
_putchar('\n');
}
