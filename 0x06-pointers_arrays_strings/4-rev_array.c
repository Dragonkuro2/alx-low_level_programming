#include "main.h"

/**
 * reverse_array - this function reverse the array
 *
 * @a: the array
 *
 * @n: the number of elemnts in the array
 */

void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i <= n / 2; i++)
{
tmp = a[n - i - 1];
a[n - i -1] = a[i];
a[i] = tmp;
}

}
