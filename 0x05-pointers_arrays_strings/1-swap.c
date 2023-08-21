#include "main.h"

/**
 * swap_int - this function swap the value of the two variables
 *
 * @a: this first number
 *
 * @b: the second number
 *
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;

}
