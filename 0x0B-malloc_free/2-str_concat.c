#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concantenates two strings
 *@s1: destination string
 *@s2: source string
 *Return: concantenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, z, total;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
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
	str = (char *)malloc((total + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	for (z = 0; z < j; z++)
	{
		str[z] = s1[z];
	}
	for (z = 0; z < j; z++)
	{
		str[i + z] = s2[z];
	}
	str[total] = '\0';
	return (str);
}
