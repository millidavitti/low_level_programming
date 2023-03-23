#include <stdio.h>
#include <stdarg.h>
/**
 *print_all -  prints anything.
 *@format: types of arguments passed to the function
 *Return: void
 */
void print_all(const char *format, ...)
{
va_list args;
int i = 0;
char c = '\0';
char *s = NULL;
float f = 0.0f;
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (format[i] == 'i')
{
int num = va_arg(args, int);
printf("%d", num);
}
else if (format[i] == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (format[i] == 's')
{
s = va_arg(args, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
i++;

if (format[i] && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}
}

printf("\n");
va_end(args);
}
