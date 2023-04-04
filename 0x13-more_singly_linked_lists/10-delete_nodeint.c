#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = (*head);
	listint_t *old = NULL;
	listint_t *previous = NULL;
	unsigned int i = 0, len = 0;
	
	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}

	if ((index > len) || (!len))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old = *head;
			if (i == 0)
			{
				*head = old->next;
				free(old);
				return (1);
			}
			previous->next = old->next;
			free(old);
			return (1);
		}
		else if ((i + 1) == index)
			previous = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}
