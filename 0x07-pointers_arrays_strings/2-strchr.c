#include "main.h"

/**
 * _strchr - this function is the same strchr function
 *
 * @s: the input pointer
 * @c: the carachter that we are looking for
 *
 * Return: itreturn NULL or the rest of the pointer s
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
