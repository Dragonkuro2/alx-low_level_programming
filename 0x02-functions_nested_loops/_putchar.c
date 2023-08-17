#include "main.h"
#include <unistd.h>

/**
 * _putchar - the function that write the char c
 *
 * Return: return the value 1 if it's correct
 *
 * @c: is the charachter that we will print
 */

int _putchar(char c);
{

return (write(1, &c, 1));
}
