#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Entry point
 *@d: pointer to dog struct
 *@name: char type
 *@age: float type
 *@owner: char pointer
 *Return: pointer to struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		return;
	}
		d->name = name;
		d->age = age;
		d->owner = owner;

}
