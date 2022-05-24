#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that print a linked list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
