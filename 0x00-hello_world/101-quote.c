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
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (i = 0 ; i != '\0'; i++)
{
putchar(quote[i]);
}
{
putchar('\n');
}

return (1);
}
