#include "function_pointers.h"

/**
 * array_iterator - this function executes a function given as a parameter
 *			on each element of an array
 * @array: the inout array
 * @size: the size
 * @action: the input function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int *last = array + size - 1;

if (array && size && action)
	while (array < last)
		action(*array++);
}
