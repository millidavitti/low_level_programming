#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to \
flip to get from one number to another.
 * @n: u..d long int
 * @m: u..d long int
 * Return: flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int exc_or = n ^ m;
unsigned int flips = 0;

while (exc_or)
{
flips++;
exc_or = exc_or & (exc_or - 1);
}
return (flips);
}
