#include "main.h"

/**
 * print_most_numbers - the functin that prints all the digit except 2 & 4
 *
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
while (i != 2 && i != 4)
	_putchar('0' + i);
_putchar('\n');

}

}
