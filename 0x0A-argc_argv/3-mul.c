#include "main.h"

/**
 * main - the main function
 *
 * @argc: the counter
 * @argv: the pointer of the array
 *
 * Return: it always return the value0 if it's run without error
 * and 1 if there's error
 */

int main(int argc, char *argv[])
{
int num3;
if (argc == 3)
{
num3 = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", num3);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
