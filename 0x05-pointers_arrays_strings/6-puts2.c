#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (n = 0 ; n <= t ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
