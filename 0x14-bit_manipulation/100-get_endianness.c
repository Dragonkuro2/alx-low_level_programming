#include "main.h"

/**
 * get_endianness - this function checks the endianness.
 */

int get_endianness(void)
{
	size_t temp = 1;
	return (*(char *)&temp);
}
