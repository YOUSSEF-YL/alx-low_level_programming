#include "lists.h"

/**
 *pop_listint - deletes the head of the node
 *@head: the lists head
 *Return: returns the data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	if (!*head)
		return (0);
	list = *head;
	*head = (*head)->next;
	n = list->n;
	free(list);
	return (n);
}
