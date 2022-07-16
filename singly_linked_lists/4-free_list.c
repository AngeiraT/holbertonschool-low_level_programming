#include "lists.h"
/**
 * free_list - frees the linked list
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

