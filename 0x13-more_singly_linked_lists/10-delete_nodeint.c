#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at the specified index
 *@head: the head of the node
 *@index: the index of the node to delete
 *Return: 1 on success else -1 is returned
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *node;

	if (!temp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && i != index - 1)
	{
		i++;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	node = temp->next;
	temp->next = temp->next->next;
	free(node);
	return (1);
}
