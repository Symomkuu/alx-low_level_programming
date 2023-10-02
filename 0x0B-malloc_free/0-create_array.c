#include "main.h"
#include <stdlib.h>
/**
 *create_array -  creates an array of chars initializes it with char
 *@size: size of the array
 *@c: character to  initialize the string
 *
 *Return: array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
