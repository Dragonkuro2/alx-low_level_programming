#include "main.h"

/**
 * factorial - this function calculat the factorial of a number
 *
 * @n: the input number
 *
 * Return: it return the factorial of number n
 *
 */

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n == 0 || n == 1)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
