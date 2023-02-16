#include <stdio.h>

/**
 *main - prints the size of C types
 *
 *Return: void
 */

int main(void)
{
char varChar;
int varInt;
long int varLong;
long long int varLLong;
float varFloat;

printf("Size of a char: %zu byte(s)\n", sizeof(varChar));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(varLong));
printf("Size of a long long int: %zu byte(s)\n", sizeof(varLLong));
printf("Size of a float: %zu byte(s)\n", sizeof(varFloat));
return (0);
}
