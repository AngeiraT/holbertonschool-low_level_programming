#include "lists.h"
/**
 * sum_listint - sum all the data n in
 * the linked list
 * @head: head pointer to list
 *
 * Return: sum or NULL
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp != NULL)
	{

		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
