#include "main.h"

/**
 * read_textfile - this function reads a text file and prints it to
 *			the POSIX standard output
 * @filename: the input file name
 * @letters: the number of letters
 * Return: depands on the output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *function;
	ssize_t checker1, checker2;
	char *array;

	if (filename == NULL)
		return (0);
	function = fopen(filename, "r");
	if (function == NULL)
		return (0);
	array = malloc(letters);
	if (array == NULL)
	{
		fclose(function);
		return (0);
	}
	checker1 = fread(array, 1, letters, function);
	if (checker1 < 0)
	{
		free(array);
		fclose(function);
		return (0);
	}
	checker2 = fwrite(array, 1, checker1, stdout);
	if (checker2 != checker1)
	{
		free(array);
		fclose(function);
		return (0);
	}
	fclose(function);
	free(array);
	return (checker2);
}
