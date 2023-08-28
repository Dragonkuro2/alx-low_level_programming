#include "main.h"

/**
 * _memcpy -  this function is similar to the function memcpy
 *
 * @dest: the destination array
 * @src: te sorce file
 * @n: the number of time we want to copy
 *
 * Return: it return the new value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
size_t i;
for (i = 0; i < n; i++)
	dest[i] = src[i];

return (dest);
}
