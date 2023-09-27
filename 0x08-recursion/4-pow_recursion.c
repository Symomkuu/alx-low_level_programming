#include "main.h"
/**
 *_pow_recursion - it finds the powers of numbers
 *@x: input number
 *@y: power
 *Return: multiplied number.
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
