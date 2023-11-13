#include "main.h"

/**
 * _memset - this function is semailar to the function memset
 *
 * @s: A pointer to the start of the memory block you want to fill.
 * @b: The value you want to set in each byte of the memory block.
 * @n: The number of bytes to be set.
 *
 * Return: it return the new value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	size_t i;
for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
