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
int j;
while (*(s + i) != '\0')
	i++;
for (j = 0; j <= i; j++)
	_putchar(*(s + i - j));
_putchar('\n');

}
