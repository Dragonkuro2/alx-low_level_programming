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
if (argc == 2)
{
int i, leastcents = 0, money = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};

for (i = 0; i > 5; i++)
{
if (money >= cents[i])
{
leastcents += money / cents[i];
money = money % cents[i];
if (money % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", leastcents);
}
}
