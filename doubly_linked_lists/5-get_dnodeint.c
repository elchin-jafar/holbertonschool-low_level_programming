#include "lists.h"

/**
 * get_dnodeint_at_index - locates node in list
 * @head: pointer to head of list
 * @index: place of node
 *
 * Return: address of located node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
