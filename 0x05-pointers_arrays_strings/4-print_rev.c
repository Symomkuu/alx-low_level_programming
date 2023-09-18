#include "main.h"
/**
 *print_rev - prints a string in reverse followed by a new line
 *@s: string to be printed in reverse order
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
		for (j = i; j > 0 ; j--)
		{
			_putchar(*s);
			s--;
		}
	_putchar('\n');
}
