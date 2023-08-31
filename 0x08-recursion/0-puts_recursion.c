#include "main.h"

/**
 * _puts_recursion - this function and the function puts are the same
 *
 * @s: the input string
 *
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
	_putchar('\n');
else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
}
