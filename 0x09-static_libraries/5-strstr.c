#include "main.h"

/**
 * _strstr - this function and the strstr function are the same
 *
 * @haystack: the haystack
 * @needle: the needle
 *
 * Return: it depands on the input
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
;
if (needle[j] == '\0')
{
return (haystack + i);
}
}

return ('\0');
}
