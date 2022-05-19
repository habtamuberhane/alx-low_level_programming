#include "lists.h"

/**
 * list_len - A function that prints element
 * @h: pointer to a head of list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
