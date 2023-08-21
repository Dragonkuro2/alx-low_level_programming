#include "main.h"

/**
 * rev_string - the function that reverse the string
 *
 * @s: the input string
 *
 */

void rev_string(char *s)
{
int i;
int tmp, j;
for (i = 0; s[i] != '\0'; ++i);
for (j = 0; j <= i / 2; j++)
{
tmp = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = tmp;
}
}
