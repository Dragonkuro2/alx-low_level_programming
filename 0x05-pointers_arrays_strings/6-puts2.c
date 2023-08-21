#include "main.h"

/**
 * puts2 - this function write just the number that contain 2
 *
 * @str: this is the input number
 *
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
	_putchar(str[i]);
}
_putchar('\n');
}
