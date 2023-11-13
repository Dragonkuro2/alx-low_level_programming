#include "main.h"

/**
 * _strpbrk - this function is just like the function strpbrk
 *
 * @s: the input text
 * @accept: the text that we'll use in the checking
 *
 * Return: it return the index of the array
 */

char *_strpbrk(char *s, char *accept)
{
size_t i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
	return (s + i);
}
}

return (NULL);
}
