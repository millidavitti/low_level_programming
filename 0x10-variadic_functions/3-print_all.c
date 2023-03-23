#include <stdio.h>
#include <stdarg.h>
/**
 *loop -  loops.
 *@format: types of arguments passed to the function
 *@c: char
 *@s: char *
 *@f: float
 *@i: iteration count
 *@args: va_list
 *Return: void
 */
void loop(const char *format, char c, char *s, float f, int i, va_list args)
{
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
}

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
loop(format, c, s, f, i, args);

printf("\n");
va_end(args);
}
