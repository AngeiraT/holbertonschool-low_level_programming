#include "lists.h"

/**
 * print_list - prints list
 * @h: head pointer
 *
 * Return: The numbers of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	unsigned int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
			count++;
	}
	return (count);
}
