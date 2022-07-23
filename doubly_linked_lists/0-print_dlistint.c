#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointing to the head
 * Return: number of nodes.
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = (dlistint_t *) h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
