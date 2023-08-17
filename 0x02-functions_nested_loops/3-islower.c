#include "main.h"

/**
 * _islower - the function that check if the charachter is lowercase or not
 *
 * Description: this function told us if the charachter is lower or not
 *
 * @c: the charachter that we want to check
 *
 * Return: it return 1 if @c is lower and turned 0 if @c is upper
 *
 */

int _islower(int c)
{
int i;
int b = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
	b = 1;
else
	b = 0;
}

return (b);
}
