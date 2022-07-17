#include "lists.h"
/**
 * get_nodeint_at_index - returns
 * the nth of a liked list
 * @head: pointer of linked list
 * @index: index of node
 *
 * Return: the node, or NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	return (temp);
}
