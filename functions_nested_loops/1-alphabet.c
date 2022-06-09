#include "main.h"

/**
 * print_alphabet - Entry point
 *
 *Return: Always 0.
 */

void print_alphabet(void)
{

	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);

	}
	_putchar('\n');
}
