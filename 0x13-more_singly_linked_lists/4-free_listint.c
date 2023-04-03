#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next; // set temp node as head then free head 
		free(head->n);
		free(head);
		head = temp_node;
	} }
