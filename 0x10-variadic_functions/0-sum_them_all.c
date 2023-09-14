#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the function that add all the arg
 * @n: the number of elements
 * @...: the rest of the arg
 * Return: it return the resut of the add
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum, res = 0;
unsigned int i = 0;
va_start(list, n);
if (n == 0)
	return (0);

for (; i < n; i++)
{
sum = va_arg(list, unsigned int);
res += sum;
}
va_end(list);
return (res);
}
