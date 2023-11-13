#include "main.h"

/**
 * _isalpha - this function check if the character is an alphabet or not
 *
 * Description : this is an function that tell us if the input
 *		 is a charachter or not
 *
 * @c: the input number
 *
 * Return: it return the value of b
 */

int _isalpha(int c)
{
int i;
int j;
int b = 0;
for (i = 'a'; i <= 'z'; i++)
{
	if (c == i)
		b = 1;
}
for (j = 'A'; j <= 'Z'; j++)
{
	if (c == j)
		b = 1;
}

return (b);
}
