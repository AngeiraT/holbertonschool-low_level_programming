#include "lists.h"

/**
 * add_node_end - ads node to list
 * @str: string added to list
 * @head: index of list
 * Return:pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *end_node;
	int idx = 0;

	end_node = *head;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		temp->str = NULL;
		temp->len = 0;
	}
	else
	{
		temp->str = strdup(str);
		while (str[idx])
		{
			idx++;
		}
		temp->len = idx;
	}
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = temp;
	}
	return (*head);
}
