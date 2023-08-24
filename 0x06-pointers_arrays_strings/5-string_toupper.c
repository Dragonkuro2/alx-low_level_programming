#include "main.h"

/**
 * string_toupper - the function makes all the array uppercase
 *
 * @s: the array
 *
 * Return: it return the new value of the array
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
	s[i] = s[i] - 32;
}

return (s);
}
