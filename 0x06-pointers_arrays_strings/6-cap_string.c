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
int i;

for (i = 0; s[i] != '\0'; i++)
{
	if ((s[i] == ' ' || s[i] == '\t' ||
	s[i] == '\n' || s[i] == ',' ||
	s[i] == ';' || s[i] == '.' ||
	s[i] == '!' || s[i] == '?' ||
	s[i] == '"' || s[i] == '(' ||
	s[i] == ')' || s[i] == '{' ||
	s[i] == '}') && s[i + 1] != '\0' &&
	s[i + 1] >= 97 && s[i + 1] <= 122)
		s[i + 1] = s[i + 1] - 32;
}
return (s);
}
