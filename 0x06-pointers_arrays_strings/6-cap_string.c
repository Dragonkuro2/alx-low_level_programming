#include "main.h"

/**
 * cap_string - this function capitalize all the text
 *
 * @s: the input array
 *
 * Return: itreturn the values of the array
 */

char *cap_string(char *s)
{
int i, j;
char array[] = " \t\n,;.!?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; array[j] != '\0'; j++)
	if (s[i] == array[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
		s[i + 1] = s[i + 1] - 32;
}
return (s);
}
