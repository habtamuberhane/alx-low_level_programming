#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the head of linked lists
 * @head: pointer to a list_t pointer that points to the head structs
 * @str: pointer to string
 * Return: pointer to new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
