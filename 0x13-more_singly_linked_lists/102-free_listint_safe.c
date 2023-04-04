#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @head: listint_t list to be freed
 */
int free_listint_safe(listint_t **h)
{
	listint_t *temp_node;
    int len = 0;

    if (!(*h))
	{
		return;
	}

	while (h)
	{
		temp_node = h->next;
        len++;
		free(h);
		h = temp_node;
	}
    return (len);
}
