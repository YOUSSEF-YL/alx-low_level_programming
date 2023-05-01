#include "lists.h"

/**
 *sum_listint - sums the data of a list
 *@head: the head of the list
 *Return: the sum
 */

int sum_listint(listint_t *head)
{
	int ref = 0;

	if (head)
	{
		while (head)
		{
			ref += head->n;
			head = head->next;
		}
	}
	return (ref);
}
