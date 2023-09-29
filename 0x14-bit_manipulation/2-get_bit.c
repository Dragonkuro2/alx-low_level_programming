#include "main.h"

/**
 * get_bit - this function returns the value of a bit at a given index.
 * @n: the input number
 * @index: the index
 * Return: the digit in the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
