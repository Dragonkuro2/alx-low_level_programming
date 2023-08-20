#include "main.h"
#include <math.h>

/**
 * prime_number - the function that will give us the largest prime number
 * @n: the input number
 * Return: it return the largest prime number
 */

long int prime_number(long int n)
{
int prnum, i;

while (n % 2 == 0)
	n = n / 2;

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
	n = n / i;
	prnum = i;
}
}
if (n > 2)
	prnum = n;

	return (prnum);
}

/**
 * main - the entry point
 *
 * Return: always return the value 0
 *
 */

int main(void)
{
int p;
p = prime_number(612852475143);
printf("%d\n", p);


return (0);
}
