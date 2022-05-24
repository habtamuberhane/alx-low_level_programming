#include "lists.h"

/**
 * pop_listint - pointer that deletes the node from struct
 * @head: pointer to the struct
 * Return: the rest of elements
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
