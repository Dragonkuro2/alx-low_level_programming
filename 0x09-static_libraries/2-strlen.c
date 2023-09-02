#include "main.h"

/**
 * _strlen - it like the function strline
 *
 * @s: the input charchter
 *
 * Return: it retuen the number output of the function
 */

int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;

return (i);
}
