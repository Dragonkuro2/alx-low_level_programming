#include "main.h"

/**
 * infinite_add - this function the content of two pointers
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the result
 * @size_r: the size of the result
 *
 * Return: it return the result if the result is more than size_r iy return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

*r = *n1 + *n2;
for (i = 0; *(r + i) != '\0'; i++)
	;
if (size_r < i + 1)
	return (0);
else
	return (r);
}
