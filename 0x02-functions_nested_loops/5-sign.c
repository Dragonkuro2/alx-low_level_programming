#include "main.h"

/**
 * print_sign - this is a function that orint the sign of the number
 *
 * Description : this is a function that thattell us the sign of a number
 *
 * @n: the input number that we want to check
 *
 * Return: it return the sign of the number
 *
 */

int print_sign(int n)
{
int i;
if (n > 0)
{
	_putchar('+');
	i = 1;
}
if (n == 0)
{
	_putchar('0');
	i = 0;
}
if (n < 0)
{
	_putchar('-');
	i = -1;
}
return (i);
}
