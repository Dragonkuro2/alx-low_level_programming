#include "main.h"

/**
 * main - the main function
 *
 * @argc: the counter
 * @argv: the pointer of the array
 *
 * Return: it return 0 is there's no error and 1 in the oposite`
 */

int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Error\n"), 1);
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
