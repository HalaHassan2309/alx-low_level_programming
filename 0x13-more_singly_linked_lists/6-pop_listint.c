#include "lists.h"

/**
 * pop_listint - delete head node 
 * @head: pointer to the first element
 *
 * Return: the data inside the elements
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int n;

	n = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (n);
}