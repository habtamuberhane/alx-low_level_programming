#include "lists.h"

/**
 * insert_nodeint_at_index - Function that insert node at given position
 * @head: pointer to structure
 * @n: data for  anew node
 * @idx: index
 * Return: Something
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *newnode, *temp;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	if(*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->n = n;
		return (newnode);
	}

	if (idx == 0)
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
