#include "main.h"
/**
 * _strlen - returns the length of an array of characters
 * @s: the string whose length needs to be determined
 * Return: length. of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
