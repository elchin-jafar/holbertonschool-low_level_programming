#include "lists.h"

/**
 * dlistint_len - count number of elements in d linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
