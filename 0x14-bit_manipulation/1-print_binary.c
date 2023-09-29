#include "main.h"

/**
 * print_binary - this function convert a number to binary
 * @n: the input number
 */

void print_binary(unsigned long int n)
{
	size_t bin = sizeof(n) * 8, temp = 0;

	while (bin)
	{
		if (n & 1LU << --bin)
		{
			_putchar('1');
			temp++;
		}
		else if (temp)
			_putchar('0');
	}
	if (temp == 0)
		_putchar('0');
}
