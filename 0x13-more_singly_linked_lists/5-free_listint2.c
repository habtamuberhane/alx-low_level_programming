#include "lists.h"

/**
 * free_listint2 - Function that frees all element and set head to null
 * @head: pointer to structure
 * Return: Norhing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
