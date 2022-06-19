#include "main.h"
#include <stdio.h>

/**
*_strpbrk - length of a prefix substring
*@s: stack memory
*@accept: stack memory
*Return: the number of bytes in the initial segment
*/

char *_strpbrk(char *s, char *accept)
{

	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
