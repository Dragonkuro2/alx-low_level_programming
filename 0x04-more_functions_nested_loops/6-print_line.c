#include "main.h"

/**
 * print_line - print n number of _
 *
 * @n: the number of the _
 *
 */

void print_line(int n)
{
	int i;
if (n <= 0)
	_putchar('\n');
else
{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
_putchar('\n');
}
_putchar('\n');
}
