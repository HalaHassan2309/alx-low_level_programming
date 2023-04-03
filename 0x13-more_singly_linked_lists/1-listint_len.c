#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: pointer to the listint_t list
 *
 * Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t n1 = 0;

	while (h)
	{
		n1++;
		h = h->next;
	}
	return (n1); }
