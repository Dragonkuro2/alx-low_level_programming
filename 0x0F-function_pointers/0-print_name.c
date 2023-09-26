#include "function_pointers.h"

/**
 * print_name - this function print the name
 * @name: the name
 * @f: the function
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
