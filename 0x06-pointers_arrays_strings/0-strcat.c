#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: A pointer to `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, j = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		a++;
		j++;
	}
	dest[a] = '\0';

	return (dest);
}
