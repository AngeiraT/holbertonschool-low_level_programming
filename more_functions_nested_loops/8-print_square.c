#include "main.h"

/**
 * print_square - Entry point
 *@size: size
 *Return: Void
 */

void print_square(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar ('#');
			}
		}
		_putchar('\n');
	}
	else

		_putchar('\n');

}
