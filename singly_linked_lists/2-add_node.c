#include "lists.h"

/**
 * add_node - add node list
 * @head: head pointer
 * @str: string added to list
 * Return: pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int idx = 0;

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
	temp->next = *head;
	*head = temp;
	return (temp);
}
