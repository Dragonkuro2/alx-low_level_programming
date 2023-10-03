#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file.
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t checker1, checker2;

	if (!filename)
		return (-1);
	checker1 = open(filename, O_WRONLY | O_APPEND);
	if (checker1 < 0)
	{
		close(checker1);
		return (-1);
	}
	if (!text_content)
	{
		close(checker1);
		return (1);
	}
	checker2 = write(checker1, text_content, strlen(text_content));
	if (checker2 < 0)
	{
		close(checker1);
		return (-1);
	}
	close(checker1);
	return (1);
}
