#include "main.h"

/**
 * malloc_checked - this function just check if we can use the function malloc or no
 *
 * @b: the number of biyts
 *
 * Return: it return the allocated memmory
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
	exit (98);
else
	return (ptr);
}
