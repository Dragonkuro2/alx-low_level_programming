#include "main.h"

/**
 * _strspn - this function is the same of the function strsnp
 *
 * @s: the original text
 * @accept: the text that we'll use for checking
 *
 * Return: it return the new value of s
 */

unsigned int _strspn(char *s, char *accept)
{
size_t i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
return (i);
}
}

return (i);
}
