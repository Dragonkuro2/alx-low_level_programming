#include "main.h"

/**
 * flip_bits - this function returns the number of bits you would
 *		need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t xor = n ^ m, counter = 0;

	while (xor)
	{
		if (xor & 1LU)
			counter++;
		xor = xor >> 1;
	}
	return (counter);

}
