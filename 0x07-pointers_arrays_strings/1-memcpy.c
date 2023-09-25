#include "main.h"
/**
 *_memcpy -  function copies n bytes from memory area src to memory area dest
 *@dest: destination where the bytesare copied to
 *@src: source of the bytes
 *@n: the number of bytes to be copied
 *Return: dest. the new copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
