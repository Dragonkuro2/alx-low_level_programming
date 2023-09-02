#include "main.h"

/**
 * _strcmp - this function and the function strcmp are the same
 *
 * @s1: the first term
 * @s2: the second term
 *
 * Return: it return 0 if s1 and s2 are the same
 */

int _strcmp(char *s1, char *s2)
{
int i, a = 0;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
a = s1[i] - s2[i];
break;
}
}

return (a);
}
