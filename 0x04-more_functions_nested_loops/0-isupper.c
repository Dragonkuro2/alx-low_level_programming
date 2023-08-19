#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that tell is a charachter is uppercase or not
 *
 * @c: the input charachter
 *
 * Return: return 1 if the charchter is an uppercase
 *	return 0 if the charachter is an lowercase
 */

int _isupper(int c)
{
int a = 0;
int i;
for (i = 65; i <= 90; i++)
{
	if (c == i)
		a = 1;
}

		return (a);
}
