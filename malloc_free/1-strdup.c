#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 * @str: copy string
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int lenght = strlen(str);
	int i;
	char *copy;

	copy = malloc(sizeof(char) * lenght + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
