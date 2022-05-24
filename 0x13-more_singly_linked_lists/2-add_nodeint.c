#include <string.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beggining 
 * @head:  pointer to listint_t structure
 * @n: An integer data to put into the new node 
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = *head;
	
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);

	(*head)->n = n;
	(*head)->next = newnode;
	return (*head);
}
