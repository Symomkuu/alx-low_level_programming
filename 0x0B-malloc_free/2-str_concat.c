#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concantenates two strings
 *@s1: input string 1
 *@s2: input string 2
 *Return: concantenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, total, z, y;
	char *c;

	if ( s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	total = i + j;
	c = (char *)malloc(sizeof(char) * (total + 1));
	if (c == NULL)
		return (NULL);
	for (z = 0; z < i; z++)
	{
		c[z] = s1[z];
	}
	for (y = 0; y < j; y++)
	{
		c[z + y] = s2[y];
	}
	c[total] = '\0';
	return (c);
}
