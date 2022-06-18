#include "main.h"

/**
 * *_memset - Entry point
 *@s: string of words
 *@b: contanst byte
 *@n: bytes of the memory
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
