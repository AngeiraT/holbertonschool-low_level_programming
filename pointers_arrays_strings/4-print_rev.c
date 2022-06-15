#include "main.h"

/**
 *print_rev - Entry point
 *@s: reverse string
 *Return: Sucess 1
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
		i--;
	for (; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
