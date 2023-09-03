#include "main.h"

/**
 * main - the main function
 *
 * @argc: the counter
 * @argv: the pointer of the array
 *
 * Return: it always return the value 0
 */

int main(int argc, char *argv[])
{
if (*argv[0] != '\0')
	printf("%d\n", argc - 1);

return (0);
}
