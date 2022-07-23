#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list.
 * @head: beginning of list
 * @n: node added to list.
 *
 * Return: pointer
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		end_node = *head;
		while (end_node->next)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
		new_node->prev = end_node;
	}
	return (new_node);
}
