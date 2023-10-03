#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: number of columns
 *@height: number of rows
 *Return: 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **num;

	num = (int **)malloc(height * sizeof(int *));
		if (num == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		num[i] = (int *)malloc(width * sizeof(int));
		if (num[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(num[j]);
			}
			free(num);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			num[i][j] = 0;
		}
	}
	return (num);
}
