#include "lists.h"

/**
 * add_nodeint - adds node at the beggining of a list
 * @head: doule pointer
 * @n: element to be added
 * Return: address of new element, or NULL
 * if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
