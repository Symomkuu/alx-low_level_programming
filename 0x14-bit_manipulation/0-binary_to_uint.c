#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: The binary string.
 *
 * Return: The converted number, or 0 if there's an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		n = (n << 1) | (*b - '0');
		b++;
	}

	return (n);
}
