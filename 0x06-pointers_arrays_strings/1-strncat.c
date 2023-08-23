#include "main.h"

/**
 * _strncat - this function and the function strncat are the same
 *
 * @dest: the destination array
 * @src: the sorce array
 * @n: the number of elemnts from the src array
 *
 * Return: itreturn the new est array
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
	;
for (j = 0; j < n && src[j] != '\0'; j++)
{
	dest[i] = src[j];
	i++;
}
dest[i] = '\0';
return (dest);
}
