#include "main.h"

/**
 * _pow_recursion - the function is like the function pow
 *
 * @x: rthe number
 * @y: the power
 *
 * Return: it return the value of x pow y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));

}
