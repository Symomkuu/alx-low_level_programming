#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - prints names
 *@name: word to be printed
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
