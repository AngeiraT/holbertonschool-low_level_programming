#include "main.h"
#include <stdio.h>
/**
*_strcpy - Entry
*@dest: array
*@src: total the characters of the string
*
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int c, a;

	c = 0;

	while (*(src + c) != '\0')
		c++;



	for (a = 0; a <= c; a++)
	{
		dest[a] = src[a];
	}



	return (dest);

}
