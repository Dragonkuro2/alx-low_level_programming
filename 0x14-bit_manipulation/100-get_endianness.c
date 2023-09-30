#include "main.h"

/**
 * get_endianness - this function checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned long int temp = 1;

	return (*(char *)&temp);
}
