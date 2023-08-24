#include "main.h"

/**
 * leet - this function transfer the input text to 1337 coding
 *
 * @s: this input text
 *
 * Return: it return the text after modifications
 */

char *leet(char *s)
{
int i, j;
char letters[] = "AaEeOoTtLl";
char numbers[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
	s[i] = numbers[j];
}
}
return (s);
}
