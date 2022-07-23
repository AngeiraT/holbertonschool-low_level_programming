#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: the start of the list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	current = head;

	for (idx = 0; idx < index; idx++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}
	return (current);
}
