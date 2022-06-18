#include "main.h"
#include <stdio.h>
/**
*_memcpy - Entry
*@dest: pointer where it copies
*@src: the string memory
*@n: bytes memory
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
