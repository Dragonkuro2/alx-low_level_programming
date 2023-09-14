#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - this function print all the argments
 * @separator: the separator used to separate the arg
 * @n: the number of arg
 * @...: the args that we enter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
{
int arg = va_arg(list, int);
printf("%d", arg);
if (i < n - 1 && separator)
{
	printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
