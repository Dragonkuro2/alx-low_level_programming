#include "main.h"

/**
 * print_alphabet - the function that print alphabet in lowercase
 *
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
}

/**
 * main - the entry point
 *
 * Return: always retunr the value 0
 *
 */
	int main(void)
{
	print_alphabet();

	return (0);
}
