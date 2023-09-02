#include "main.h"

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 * @n1: the divisor to test
 * Return: 1 if @n is prime, 0 otherwise.
 */

int check_prime(int n, int n1);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Helper function to check primality recursively.
 * @n: The number to be checked.
 * @n1: The divisor to test.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */

int check_prime(int n, int n1)
{
if (n1 >= n && n > 1)
	return (1);
else if (n % n1 == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, n1 + 1));
}
