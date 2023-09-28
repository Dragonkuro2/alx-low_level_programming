#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int
 * @b: the input binary number
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i = 0, num = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * (1 << (strlen(b) - i - 1));
	}
	return (num);

}
