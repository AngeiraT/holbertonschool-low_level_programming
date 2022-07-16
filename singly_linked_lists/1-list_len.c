#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: head pointer
 *
 * Return: The numbers of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	unsigned int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
			count++;
	}
	return (count);
}
