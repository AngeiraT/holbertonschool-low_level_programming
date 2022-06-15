#include "main.h"

/**
 *_puts - Entry point
 *@str: string
 *Return: Sucess 1
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
