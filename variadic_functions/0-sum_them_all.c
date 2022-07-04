#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: const unsigned int
*
* Return: 0 if n == 0 or the sum all characters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
