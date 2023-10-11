#include "function_pointers.h"
/**
 *int_index - returns index
 *@array: input array
 *@size: size of the array
 *@cmp: the compare function
 *Return: index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
