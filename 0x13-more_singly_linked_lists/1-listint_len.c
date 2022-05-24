#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements in linked list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;
	
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
