#include "main.h"

/**
 * rev_string - the function that reverse the string
 *
 * @s: the input string
 *
 */

void rev_string(char *s)
{
int i = 0;
int tmp, j;
while (s[i])
	i++;

for (j = 0; j <= i / 2; j++)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i--;
}
_putchar('\n');
}
