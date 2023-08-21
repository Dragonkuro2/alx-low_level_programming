#include "main.h"

/**
 * print_array - this function prints all the arrays with comma
 *
 * @a: the first pointer
 *
 * @n: the tall of the array
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
}
printf("\n");
}
