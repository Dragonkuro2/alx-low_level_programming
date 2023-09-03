#include "main.h"
#include <stdlib.h>
/**
 * main - the main function
 *
 * @argc: the counter
 * @argv: the pointer of the array
 *
 * Return: it always return the value0 if it's run without error
 * and 1 if there's error
 */

int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
if (argc != 3)
{
printf("Error");
return (1);
}
else
printf("%d\n", num1 * num2);
return (0);
}
