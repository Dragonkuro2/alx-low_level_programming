#include "main.h"

/**
 * _strcpy - this function copy the text from the first iteam to the other
 *
 * @src: the text that we want to copy
 * @dest: the array that we want to copy into it
 * Return: it return thattext that we just copied
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
	src[i] = dest[i];

return (dest);
}
