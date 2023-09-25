#include "main.h"
/**
 *_memset - fils the memory with a constant byte
 *@s: this is the start of the memory block to be set
 *@b: the value to be set in each memory block
 *@n: number of bytes to be set to the specified value
 *Return: s. the pointer to the memory aresa
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
