#include "main.h"
#include <stdlib.h>
/**
 *argstostr - prints all the arguements
 *@ac: number of arguements
 *@av: arguements
 *Return: c. arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, sum = 0, y = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sum++;
		}
		sum++;
	}
	c = (char *)malloc(sizeof(char) * (sum + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		c[y++] = av[i][j];
		}
		c[y++] = '\n';
	}
	c[y] = '\0';
	return (c);
}
