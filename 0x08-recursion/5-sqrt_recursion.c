#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root.
 * @n: The input integer.
 * @val: The current value.
 * Return: The square root of n or -1 if not found.
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - Recursively find the square root.
 * @n: The input integer.
 * @val: The current value.
 * Return: The square root of n or -1 if not found.
 */

int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
