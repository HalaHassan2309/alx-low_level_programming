#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (!(*head))
	{
	}

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	(*head) = NULL;
}
