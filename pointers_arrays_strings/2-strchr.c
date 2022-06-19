#include "main.h"
#include <stdio.h>

/**
*_strchr - Entry
*@s: string
*@c: ocurrence character
*Return: Null if ocurrance
*/

char *_strchr(char *s, char c)

{
	int i, j;

	j = 0;

	while (*(s + j) != '\0')
		j++;

	for (i = 0; i <= j; i++, s++)
	{
		if (*s == c)
			return (s);
	}

	return (0);


}
