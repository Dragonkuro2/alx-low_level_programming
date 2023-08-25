#include "main.h"

/**
 * infinite_add - this function the content of two pointers
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the result
 * @size_r: the size of the result
 *
 * Return: it return the result if the result is more than size_r iy return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k, l = 0, f, s, d = 0;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > j)
l = i;
else
l = j;
if (l + 1 > size_r)
return (0);
r[l] = '\0';
for (k = l - 1; k >= 0; k--)
{
i--;
j--;
if (i >= 0)
f = n1[i] - 48;
else
f = 0;
if (j >= 0)
s = n2[j] - 48;
else
s = 0;
r[k] = (f + s + d) % 10 + '0';
d = (f + s + d) / 10;
}
if (d == 1)
{
r[l + 1] = '\0';
if (l + 2 > size_r)
return (0);
while (l-- >= 0)
r[l + 1] = r[l];
r[0] = d + 48;
}
return (r);
}
