#include "lists.h"
/**
 *print_listint - prints all elements in alist
 *@h: pointer to first element
 *Return: count.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return(0);
	}
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
