#include "lists.h"
/**
 *listint_len- counts all ellements
 *@h: pointer to first node
 *Return: count.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
