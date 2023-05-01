#include "lists.h"

/**
 *free_listint - frees a list
 *@head: the head of the list
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
