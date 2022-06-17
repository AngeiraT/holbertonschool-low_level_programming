#include "main.h"
#include <stdio.h>
/**
*_strncpy - Entry
*@dest: appending hello
*@src: the string two world
*@n: the long of the string
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	c = 0;
	a = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}

	while (*(dest + a) != '\0')
	{
		a++;
	}

	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[b] = src[b];
	}

	for (; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
