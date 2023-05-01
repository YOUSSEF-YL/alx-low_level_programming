#include "lists.h"

/**
 *listint_len - gets the size of the list
 *@h: the head of the linked list
 *Return: the numner of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
