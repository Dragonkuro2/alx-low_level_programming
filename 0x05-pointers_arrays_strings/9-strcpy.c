#include "main.h"

/**
 * _strcpy - this function copy the text from the first array to another
 *
 * @src: the text that we want to copy
 * @dest: the array that we want to copy into it
 * Return: it return the text that we just copied
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
