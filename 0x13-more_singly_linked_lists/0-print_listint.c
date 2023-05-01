#include "lists.h"

/**
 *print_listint - prints the linked list
 *@h: the head of the linked list
 *Return: the numner of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
