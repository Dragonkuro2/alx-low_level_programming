#include "main.h"

/**
 * more_numbers - the fonction that prints all the numbers from 0 to 14
 *			 ten times
 *
 */

void more_numbers(void)
{
int i, s;
int a = 0;
while (a != 10)
{
	for (i = 0; i <= 14; i++)
{
	s = i;
	if (i > 9)
	{
		_putchar('1');
		s = i % 10;
	}
		_putchar('0' + s);
}
_putchar('\n');
a++;
}
}
