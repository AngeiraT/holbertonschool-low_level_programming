#include "main.h"
#include <stdio.h>
/**
*_strcat - Entry
*@dest: appending
*@src: the string
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *s1 = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s1);
}
