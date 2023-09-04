#include "main.h"
#include <string.h>

/**
 * _strdup - this function is just like the function strdup
 *
 * @str: the array that we want to copy
 *
 * Return: it depends on output of the function
 */

char *_strdup(char *str)
{
size_t i;
char *s;

if (str == NULL)
	return (NULL);

s = (char *)malloc(sizeof(char) * strlen(str) + 1);

if (s == NULL)
	return (NULL);
else
	for (i = 0; i <= strlen(str); i++)
		*(s + i) = *(str + i);
return (s);

}
