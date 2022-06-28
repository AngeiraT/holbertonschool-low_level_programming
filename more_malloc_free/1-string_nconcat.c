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
	unsigned int idx, idx2;
	unsigned int len1, len2;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1]; len1++)
	{
	}
	for (len2 = 0; s2[len2]; len2++)
	{
	}
	if (n >= len2)
	{
		n = len2;
	}
	new_string = malloc(sizeof(char) * (len1 + n) + 6);

	if (new_string == NULL)
		return (NULL);
	for (idx = 0; idx < len1; idx++)
	{
		new_string[idx] = s1[idx];
	}
	for (idx2 = 0; idx2 < n; idx2++)
	{
		new_string[idx] = s2[idx2];
		idx++;
	}
	new_string[idx] = '\0';
	return (new_string);
}
