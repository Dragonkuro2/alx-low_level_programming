#include "main.h"

/**
 * main - the main function
 *
 * @argc: the counter
 * @argv: the pointer of array
 *
 * Return: it always return the value 0
 */

int main(int argc, char *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;

}

return (0);
}
