#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int checker, counter = 0;
	ssize_t checker2;

	if (!filename)
		return (-1);
	checker = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (checker == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[counter])
		{
			counter++;
			checker2 = write(checker, text_content, counter);
		}
	}
	if (checker2 == -1)
		return (-1);
	close(checker);
	return (1);
}
