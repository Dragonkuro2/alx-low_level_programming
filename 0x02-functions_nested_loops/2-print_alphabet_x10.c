#include "main.h"

/**
 * print_alphabet_x10 - it print all the alphabets in lowercase 10 time
 *
 * Description: this function print the alphabet in lowercase 10 time
 *
 */

void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
	_putchar(j);
_putchar('\n');
}
}
