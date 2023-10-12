#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers in unknown args
 *@separator: separator
 *@n: number of arguements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
