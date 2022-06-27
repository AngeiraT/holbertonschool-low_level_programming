#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * string_nconcat - Entry point
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2
 * Return: 0 Sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	char *array;

	array = malloc(n);

	n = length1 + length2 + 1;

	while (*s1 != '\0')
	{
		array[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		array[i] = *s2;
		s2++;
		i++;
	}
	array[i] = '\0';
	return (array);
}
