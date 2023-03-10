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
(void)argc;
for (i = 0; argv[i]; i++)
printf("%s", argv[i]);
return (0);
}
