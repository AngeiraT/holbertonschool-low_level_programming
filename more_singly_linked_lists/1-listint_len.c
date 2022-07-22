#include "lists.h"
/**
 * listint_len - return the number of elements in
 * in a list
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t  *temp;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
