#include <stdio.h>

/**
 * main - the main function
 *
 * Return: it always return the value 0
 *
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');

return (0);
}
