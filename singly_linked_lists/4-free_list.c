#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: pointer to the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		free(head);
	}
}
