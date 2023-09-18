#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: pointer to be used in swapping
 */
void swap_int(int *a, int *b)
{
	int *j;
	int n;

	j = &n;
	*j = *a;
	*a = *b;
	*b = *j;
}
