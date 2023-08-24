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
int i = 0;

while (s[i])
{
while (!(s[i] >= 97 && s[i] <= 122))
i++;

if ((s[i - 1] == ' ' || s[i - 1] == '\t' ||
	s[i - 1] == '\n' || s[i - 1] == ',' ||
	s[i - 1] == ';' || s[i - 1] == '.' ||
	s[i - 1] == '!' || s[i - 1] == '?' ||
	s[i - 1] == '"' || s[i - 1] == '(' ||
	s[i - 1] == ')' || s[i - 1] == '{' ||
	s[i - 1] == '}') || i == 0)
s[i] = s[i] - 32;
i++;
}
return (s);
}
