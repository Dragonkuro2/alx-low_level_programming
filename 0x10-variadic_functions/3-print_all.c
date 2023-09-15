#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * should_print_separator - this function checks if a separator
 *				should be printed or not
 * @symbol: the separator symbols
 * @currentChar: the current character in the format string
 * @nextChar: the next character in the format string
 *
 * Return: 1 if a separator should be printed, 0 otherwise
 */
int should_print_separator(const char *symbol, char currentChar, char nextChar)
{
size_t j = 0;

	while (symbol[j])
	{
	if (symbol[j] == currentChar && nextChar != '\0')
		return (1);
	j++;
	}

return (0);
}

/**
 * print_all - this function prints all the type of arg
 * @format: the symbol of the arg
 * @...: the args
 */

void print_all(const char * const format, ...)
{
va_list list;
size_t i = 0;
char symbol[] = "cifs";
va_start(list, format);
while (format[i])
{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
		{
		char *arg = va_arg(list, char *);
			if (arg == NULL)
				printf("(nil)");
			else
				printf("%s", arg);
			break;
		}
		default:
			break;
	}
if (should_print_separator(symbol, format[i], format[i + 1]))
	printf(", ");
i++;
}
printf("\n");
va_end(list);
}
