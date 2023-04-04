#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		len++;
		head = head->next;
	}
    printf("-> [%p] %d\n", (void *)head, head->n);
	if (!head)
		exit(98);

	return (len);
}