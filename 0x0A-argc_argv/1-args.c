#include <stdio.h>
/**
 *main - prints argument count
 *@argc: argument count
 *@argv: array of pointers
 *Return: int
 */

int main(int argc, char *argv[])
{
(void)argc;
int i = 0;
while(argv[i])
i++;
printf("%d\n", i);
return (0);
}
