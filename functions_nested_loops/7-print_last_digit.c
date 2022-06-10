#include "main.h"

/**
 *print_last_digit - Entry point
 *@n: last digit
 *Return: Always 0
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}
	last = n % 10;

	if (last < 0)
	{
		last = -last;

		_putchar(last + '0');
	}
	return (last);
}
