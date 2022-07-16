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
	size_t count = 0;
	ptr = h;
	
	if(h == NULL)
	{
		printf("[0] (nil)\n");
	
		while(ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	printf("[%i] %s\n", ptr->len, ptr->str);
	return(count);
}
