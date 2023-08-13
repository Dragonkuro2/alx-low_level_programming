#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always return the value 0
 *
 */

int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)
{
if (i != j && j != 0)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8 && j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
