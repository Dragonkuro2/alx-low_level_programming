#include "main.h"

/**
 * print_triangle - the function that prints triangles
 *
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
int i, j, x;
if (size <= 0)
	_putchar('\n');
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (x = 1; x <= i; x++)
_putchar('#');
_putchar('\n');
}

}
}
