#include "main.h"

/**
 * print_rev - this function print the string reverselly
 *
 * @s: this is the input charachter
 *
 */

void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;
while (i--)
	_putchar(s[i]);
_putchar('\n');

}
