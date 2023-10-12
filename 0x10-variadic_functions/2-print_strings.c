#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints unknown strings
 *@separator: separator
 *@n: number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		char *new = va_arg(args, char *);

		if (new != NULL)
		{
			printf("%s", new);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
