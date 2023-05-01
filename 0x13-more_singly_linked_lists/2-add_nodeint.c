#include "lists.h"

/**
 *add_nodeint - add a node at the beginning of a list
 *@head: the address of the head
 *@n: the new node data
 *Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list = malloc(sizeof(listint_t));

	if (!list)
		return (NULL);
	list->n = n;
	list->next = NULL;
	if (*head)
	{
		list->next = *head;
		*head = list;
	}
	else
		*head = list;
	return (list);
}
