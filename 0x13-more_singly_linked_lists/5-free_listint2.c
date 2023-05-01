#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: the head of the list
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
