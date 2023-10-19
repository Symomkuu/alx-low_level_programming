#include "lists.h"
/**
 * print_list - Print all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *str;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');

			str = h->str;
			while (*str != '\0')
			{
				_putchar(*str);
				str++;
			}
		}

		_putchar('\n');
		h = h->next;
		count++;
	}

	return (count);
}
