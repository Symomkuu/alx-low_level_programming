#include "main.h"
#include <stdlib.h>
/**
 *_strdup -  returns a pointer to a newly allocated space in memory
 *@str: input string
 *Return: copy of the input string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *c;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	c = (char *)malloc(i * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
