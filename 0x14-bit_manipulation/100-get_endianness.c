#include "main.h"

/**
 * get_endianness - this function checks the endianness.
 */

int get_endianness(void)
{
	unsigned long int temp = 1;

	return (*(char *)&temp);
}
