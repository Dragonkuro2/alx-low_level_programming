#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0 at a given index
 * @n: the input number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(n) * 8))
		return (-1);
	return (!!(*n &= ~(1LU << index)));
}
