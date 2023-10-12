#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - prints all types of arguements
 *@format: format of arguements
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0;
	char *sep = "", *new;
	va_list args;

	va_start(args, format);
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				new = va_arg(args, char *);
				if (new != NULL)
					printf("%s%s", sep, new);
				else
					printf("%s(nil)", sep);
				break;
			default:
				break;
		}
		sep = ", ";
		a++;
	}
	printf("\n");
	va_end(args);
}
