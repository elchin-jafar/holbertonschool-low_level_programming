#include "lists.h"

/**
 * free_dlistint - frees linked listi
 * @head: pointer to the head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
