#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - this function prints all the type of arg
 * @format: the symbol of the arg
 * @...: the args
 */

void print_all(const char * const format, ...)
{
va_list list;
size_t i = 0, j;
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
	j = 0;
		while (symbol[j])
		{
		if (symbol[j] == format[i] && format[i + 1] != '\0')
		{
			printf(", ");
			break;
		}
			j++;
		}
i++;
}
printf("\n");
va_end(list);
}
