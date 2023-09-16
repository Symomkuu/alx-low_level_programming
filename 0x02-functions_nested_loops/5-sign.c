#include "main.h"
/**
 *print_sign - checks the sign of a number
 *@n: the number to be checked
 *
 * Return:
 *  1 - if the number is positive, and prints '+'
 *  0 - if the number is zero, and prints '0'
 * -1 - if the number is negative, and prints '-'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
