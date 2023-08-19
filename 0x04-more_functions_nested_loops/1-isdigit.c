#include "main.h"

/**
 * _isdigit - the function that tell us if the input is a digit or not
 *
 * @c: the number
 *
 * Return: it return 1 if the number is a digit
 *		and return 0 otherwise
 */

int _isdigit(int c)
{
int i;
int b = 0;
for (i = '0'; i <= '9'; i++)
{
	if (c == i)
		b = 1;
}

return (b);
}
