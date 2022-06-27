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
	int i;
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	char *array = calloc(n, sizeof(char));

	n = length1 + length2 + 1;

	for (i = 0; i < length1; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		array[length1 + i] = s2[i];
	}
	array[n - 1] = '\0';
	return (array);
}
