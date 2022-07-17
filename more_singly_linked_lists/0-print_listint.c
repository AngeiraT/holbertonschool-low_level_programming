#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: head pointer to the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *temp;

	temp = h;

	for (count = 0; temp != NULL; count++)
	{

		printf("%i\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
