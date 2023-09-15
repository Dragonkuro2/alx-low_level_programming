#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this function prints the input string
 * @separator: this is the separator of the text
 * @n: the number of arg
 * @...: the rest of the arg
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
char *string = va_arg(list, char *);
if (string == NULL)
	printf("(nil)");
else
printf("%s", string);
if (separator && i < n - 1)
	printf("%s", separator);
}
printf("\n");
va_end(list);
}
