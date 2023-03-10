#include <stdio.h>
/**
 *main - prints argument count
 *@argc: argument count
 *@argv: array of pointers
 *Return: int
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
