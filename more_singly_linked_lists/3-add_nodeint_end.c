#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of
 * a list
 * @head: first node
 * @n: integer added
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *temp;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;

		return (new_node);
	}
}
