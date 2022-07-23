#include "lists.h"
/**
 * free_dlistint - free a dlist
 * @head: beginning of list
 *
 * Return: None
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
