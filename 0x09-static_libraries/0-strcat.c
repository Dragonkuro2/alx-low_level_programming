#include "main.h"

/**
 * _strcat - this function are just like the function strcat
 *
 * @dest: the detniation to put the sorce file
 * @src: the sorce text
 *
 * Return: it return the new value of destination array
 */

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
	;
for (j = 0; src[j] != '\0'; j++)
{
	dest[i] = src[j];
i++;
}

return (dest);
}
