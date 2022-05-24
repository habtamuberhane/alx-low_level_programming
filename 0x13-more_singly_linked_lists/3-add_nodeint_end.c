#include "lists.h"

/**
 * add_nodeint_end - Function that add node at the end of the list
 * @head: Pointer to structure
 * @n: integer to put to the newnode
 * Return: The address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if(*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
