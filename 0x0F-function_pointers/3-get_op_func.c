#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *get_op_func - the function that selects the correct function \
to perform the operation asked by the user.
*@s: aritmethic operator
*Return: int
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;

i = 0;
while (ops[i].op)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}
printf("Error\n");
exit(99);
}
