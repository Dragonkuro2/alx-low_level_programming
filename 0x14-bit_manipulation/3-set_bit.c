#include "main.h"

/**
 * set_bit - this function set anumber at the certain index
 * @n: the input number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(n) * 8))
		return (-1);
	return (!!(*n |= 1LU << index));
}
