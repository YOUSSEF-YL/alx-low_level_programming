#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of the list
 *@head: the head of the list
 *@n: the value of the node to add
 *Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!list)
		return (NULL);
	list->n = n;
	list->next = NULL;
	if (*head)
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = list;
	}
	else
		*head = list;
	return (list);
}
