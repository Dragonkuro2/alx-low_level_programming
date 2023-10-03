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
	char *array;
	int function;
	ssize_t checker1, checker2;

	if (filename == NULL || letters == 0)
		return (0);
	function = open(filename, O_RDONLY);
	if (function == -1)
		return (0);
	array = malloc(letters);
	if (array == NULL)
	{
		close(function);
		return (0);
	}
	checker1 = read(function, array, letters);
	if (checker1 == -1)
	{
		free(array);
		close(function);
		return (0);
	}
	checker2 = write(STDOUT_FILENO, array, letters);
	if (checker2 == -1)
	{
		free(array);
		close(function);
		return (0);
	}
	close(function);
	free(array);
	return (checker2);
}
