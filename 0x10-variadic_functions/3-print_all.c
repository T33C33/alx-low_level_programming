#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *string;
	va_list arg_ls;
	char comma = ',';
	unsigned int i = 0;

	va_start(arg_ls, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_ls, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_ls, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(arg_ls, double));
				break;
			case 's':
				string = va_arg(arg_ls, char *);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
				break;
			default:
				comma = '\0';
				break;
		}
		if (format[i + 1] != '\0' && comma != '\0')
			printf("%c ", comma);
		i++;
	}
	printf("\n");
	va_end(arg_ls);
}
