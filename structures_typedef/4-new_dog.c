#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog- Entry point
 *@name: name
 *@age: age
 *@owner: owner
 *Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int idx;

	if (new_dog == NULL)
	{
		return (NULL);
	}
	memcpy(&new_dog, &dog_t, sizeof(*new_dog));
	

}
