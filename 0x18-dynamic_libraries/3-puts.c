#include "main.h"

/**
 * _puts - this function is similar to the function puts
 *
 * @str: the input string
 *
 */

void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
	_putchar(*(str + i));
	i++;

}
	_putchar('\n');

}
