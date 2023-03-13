#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - creates an array of chars, and \
initializes it with a specific char.
*@size: array size
*@c: char
*Return: char*
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (!size)
return (NULL);
arr = (char *)malloc(sizeof(char) * size);
if (!array)
return (NULL);
for (i = 0; i < size; i++)
*(arr + i) = c;
return (arr);
}
