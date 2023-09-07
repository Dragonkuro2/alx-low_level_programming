#include "main.h"

/**
 * _calloc - this function is like the function calloc
 *
 * @nmemb: the number of elemnts is the array
 * @size: the size to allocat in the memory
 *
 * Return: it depands on the output of the function
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *new;
size_t i;

if (nmemb == 0 || size == 0)
	return (NULL);

new = (char *)malloc(size * nmemb);
if (new == NULL)
	return (NULL);
for (i = 0; i < nmemb; i++)
	new[i] = 0;

return (new);
}
