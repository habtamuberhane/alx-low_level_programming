#include "lists.h"

/**
 * free_list - A function that frees all elements in linked list
 * @head: pointer to head 
 * Return: Norhing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
