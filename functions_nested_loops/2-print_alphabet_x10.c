#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *Return: Void
 */

void print_alphabet_x10(void)
{

	char l;
	int count = 10;

	for (count = 0; count <= 9; count++)
	{

		for (l = 'a'; l <= 'z'; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}
}

