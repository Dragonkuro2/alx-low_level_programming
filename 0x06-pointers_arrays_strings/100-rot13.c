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
char s1[] = "ABCDEFGHIJKLM";
char s2[] = "NOPQRSTUVWXYZ";
char s3[] = "abcdefghijklm";
char s4[] = "nopqrstuvwxyz";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 13; j++)
{
if (s[i] == s1[j])
	s[i] = s2[j];
else if (s[i] == s2[j])
	s[i] = s1[j];
else if (s[i] == s3[j])
	s[i] = s4[j];
else if (s[i] == s4[j])
	s[i] = s3[j];
}

}

return (s);
}
