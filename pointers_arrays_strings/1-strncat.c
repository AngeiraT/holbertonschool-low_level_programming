#include <stdio.h>
/**
*_strncat - Entry
*@dest: appending hello
*@src: the string two world
*@n: the long of the string
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *s1 = dest;

	while (*dest)
	{
		dest++;
	}
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			src++;
			dest++;
		}
		else
			break;
	}
	return (s1);
}
