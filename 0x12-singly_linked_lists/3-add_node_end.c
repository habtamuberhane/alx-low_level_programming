#include "lists.h"
#include <string.h>

/**
 * add_node_end -  A function that add a node at the end
 * @head: pointer to list_t that point to head of struct
 * @str: string to add
 * Return: pointer to new element of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int length = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	
	while (str[length])
		length++;

	newnode->len = length;
	newnode->str = strdup(str);

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
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
