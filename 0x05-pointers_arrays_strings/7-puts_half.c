#include "main.h"

/**
 * puts_half - the function that prints the end half of the text
 *
 * @str: this input
 *
 */

void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
	;
for (j = (i + 1) / 2; str[j] != '\0'; j++)
	_putchar(str[j]);
_putchar('\n');

}
