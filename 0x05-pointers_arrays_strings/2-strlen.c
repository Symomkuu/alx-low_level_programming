#include "main.h"
/**
 * int _strlen - returns the length of a string
 * @s: the string whose length needs to be determined
 */
int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length ++;
	}
	return length;
}
