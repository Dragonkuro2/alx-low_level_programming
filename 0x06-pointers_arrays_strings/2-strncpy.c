#include "main.h"

/**
 * _strncpy - this function and the function strncpy are the same
 *
 * @dest: the destination array
 * @src: the sorce array
 * @n: the number of biyts that we want to copy
 *
 * Return: it retun the new dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
while (i < n)
{
	dest[i] = '\0';
i++;
}
	return (dest);
}
