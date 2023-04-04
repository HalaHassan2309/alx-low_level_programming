#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = (*head);
	listint_t *new = NULL;
	listint_t *previous = NULL;
	unsigned int i = 0;
	size_t count = 0;
	
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL || idx > count)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new->next = *head;
				*head = new;
				return (new);
			}
			new->next = previous->next;
			previous->next = new;
			return (new);
		}
		else if ((i + 1) == idx)
			previous = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL); }
