#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - iterates through all elements
 *@array: the array
 *@size: size of the array.
 *@action: the function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
