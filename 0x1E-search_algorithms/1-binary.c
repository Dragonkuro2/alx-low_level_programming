#include "search_algos.h"
/**
 * print - function that prints the input array
 * @array: pointer to the first element of the array
 * @start: the index of the first element of the array that we want to print
 * @end: index off the last element of the array that we want to print
 */
void print(int *array, int start, int end)
{
	int i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}
}

/**
 * binary_search - function that searches for a value in a sorted array
 *                      of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if it fail to find it.
 */
int binary_search(int *array, size_t size, int value)
{
	int start, midle, end;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	while (end >= start)
	{
		print(array, start, end);
		midle = (start + end) / 2;
		if (value > midle)
		{
			start = midle + 1;
		}
		else if (value < midle)
		{
			end = midle - 1;
		}
		else if (array[midle] == value)
			return (midle);
	}
	return (-1);
}
