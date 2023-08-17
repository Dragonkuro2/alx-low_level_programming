#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * Description: This function prints the last digit of the input number
 *              and returns the last digit.
 *
 * @s: The number whose last digit is to be printed.
 *
 * Return: The last digit of the input number.
 */
int print_last_digit(int s)
{
int last_digit = s % 10;
_putchar('0' + last_digit);

return (last_digit);
}

