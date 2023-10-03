#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int checker;
	ssize_t checker2;

	checker = creat(filename, 0600);
	if (checker == -1)
		return (-1);
	checker2 = write(checker, text_content, strlen(text_content));
	if (checker2 == -1)
		return (-1);
	close(checker);
	return (1);
}
