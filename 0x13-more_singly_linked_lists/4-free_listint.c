#include "lists.h"

/**
 * free_listint - Function tht frees all element
 * @head: pointer to a structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
