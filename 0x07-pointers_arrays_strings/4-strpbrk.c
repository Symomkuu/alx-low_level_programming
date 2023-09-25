#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: input
 * Return: s.
 */
char *_strpbrk(char *s, char *accept)
{
		int f;

		while (*s)
		{
			for (f = 0; accept[f]; f++)
			{
			if (*s == accept[f])
			return (s);
			}
		s++;
		}

	return ('\0');
}
