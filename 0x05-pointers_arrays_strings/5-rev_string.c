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
int j;
while (*(s + i) != '\0')
	i++;
for (j = 0; j <= i; j++)
	_putchar(*(s + i - j));
_putchar('\n');

}
