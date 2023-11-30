#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: passed string
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
