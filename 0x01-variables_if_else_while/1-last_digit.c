#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point
 * Return : always return the value 0
 * @s : the variable that store the last digit of the number n
 */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	s = n%10;
	if (s > 5)
	{
	printf("Last digit of %d is greater than 5\n", n);
	}
	else if (s == 0)
	{
	printf("Last digit of %d is 0\n", n);
	}
	else 
	{
	printf("Last digit of %d less than 6 and not 0\n", n);
	}

	return (0);
}
