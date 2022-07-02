#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{

	}
	return (idx);
}
/**
 * _strcpy - function to copy string from source to destination
 *@dest: pointer to destinatioin of string to be copied
 *@src: pointer to source of string to be copied
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';
	return (dest);
}
/**
 * *new_dog - function to create new dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: Always success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
		return (NULL);
	_strcpy(newdog->name, name);

	newdog->age = age;

	if (owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
		return (NULL);
	_strcpy(newdog->owner, owner);

	return (newdog);
}
