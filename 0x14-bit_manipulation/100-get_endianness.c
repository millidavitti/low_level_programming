#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 or 1.
 */

int get_endianness(void)
{
int start = 1;
char *end;

end = (char *)&start;

return (*end);
}
