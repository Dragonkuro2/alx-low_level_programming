#include <stdio.h>

/**
 * main - the main function
 *
 *Return: always return the value 0
 *
 */

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
