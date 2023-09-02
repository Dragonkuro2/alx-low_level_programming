#include "main.h"

/**
 * _strlen_recursion - this function is like the function strlen
 *
 * @s: the input text
 *
 * Return: it return the lentgh of the text
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
else
	return (1 + _strlen_recursion(s + 1));
}
