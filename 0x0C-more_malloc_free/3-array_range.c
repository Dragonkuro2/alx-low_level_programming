#include "main.h"

/**
 * array_range - this function create an array from the range that we get
 *
 * @min: the minimum number
 * @max: the max number
 *
 * Return: it depands on the output of the function
 */

int *array_range(int min, int max)
{
int *array;
int i;

if (min > max)
	return (NULL);
array = (int *)malloc(sizeof(int) * (max - min + 1) + 1);
if (array == NULL)
	return (NULL);

for (i = 0; min <= max; min++, i++)
	array[i] = min;
array[i] = '\0';

return (array);
}
