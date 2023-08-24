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
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == s1[j])
s[i] = s2[j];
break;
}
}
return (s);
}
