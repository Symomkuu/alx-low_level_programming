#include "main.h"
/**
 * int _strlen - returns the length of a string
 * @s: the string whose length needs to be determined
 */
int _strlen(char *s)
{
	int length;
	
	length = 0;
	while (*s != '\0')
	{
		length ++;
		s++;
	}
	return length;
}
