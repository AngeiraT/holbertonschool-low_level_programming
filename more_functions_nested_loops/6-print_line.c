#include "main.h"

/**
 * print_line - Entry point
 *@n: number of times line printed
 *Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar ('_');
	}
	putchar('\n');
}
