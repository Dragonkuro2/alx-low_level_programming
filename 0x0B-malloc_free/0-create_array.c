#include "main.h"

/**
 * create_array - this function create an array
 *
 * @size: the size of the array
 * @c: the input character
 * Return: it depands on the output of the function
 *
 */

char *create_array(unsigned int size, char c)
{
size_t i;
char *s = (char *)malloc(size * sizeof(char));

if (size == 0)
	return (0);
else
{
if (s == NULL)
	return (NULL);
else
{
	for (i = 0; i < size; i++)
		s[i] = c;
return (s);
}
}
}
