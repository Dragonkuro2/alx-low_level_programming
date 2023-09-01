#include "main.h"

/**
 * _print_rev_recursion - this function is like the function puts but in reverse
 *
 * @s: the input text
 *
 */

void _print_rev_recursion(char *s)
{
if (*s ==  '\0')
	return;
else
{
_print_rev_recursion(s + 1);
_putchar(*s);

}

}
