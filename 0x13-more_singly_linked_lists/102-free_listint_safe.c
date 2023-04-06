#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	long int d;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp_node = (*h)->next;
			*h = temp_node;
			num++;
		}
		else
		{
			*h = NULL;
			num++;
			break;
		}
	}

	*h = NULL;

	return (num); }
