#include "main.h"

/**
 * print_diagonal - Entry point
 *@n: number of space
 *Return: Void
 */

void print_diagonal(int n)
{

	int i, j;

	if (n > 0)

		for (i = 1; i <= n; i++)
	{
			for (j = 1; j <= n; j++)
				_putchar (' ');
	}
	_putchar(47);
	_putchar('\n');
}
