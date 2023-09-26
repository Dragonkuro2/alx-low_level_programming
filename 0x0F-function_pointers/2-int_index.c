#include "function_pointers.h"

/**
 * int_index - this function that searches for an integer
 * @array: the inout array
 * @size: the size
 * @cmp the inout function
 * Return: 0, 1 or -1 it depands on the result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i > size)
		{
			if (cmp(array[i]))
				return (i);
			i++
		}
	return (-1);
}
