#include "main.h"

/**
 * rot13 - this function encrypt theinput text using the encription rot13
 *
 * @s: the input array
 *
 * Return: it return the new text after encription
 */

char *rot13(char *s)
{
int i, j;
char s1[] = "ABCDEFGHIJKLMabcdefghijklm";
char s2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

for (i = 0 ; s[i] != '\0'; i++)
{
for (j = 0; j < 26; j++)
{
if (s[i] == s1[j])
	s[i] += 13;
else if (s[i] == s2[j])
	s[i] -= 13;
}

}

return (s);
}
