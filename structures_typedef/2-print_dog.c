#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - Entry point
 *@d: pointer to dog struct
 *
 *Return: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == NULL)
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
}
