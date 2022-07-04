#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that returns all its parameters.
* @n: const unsigned integers passed
* @separator: string to be printed between numbers
* Return:Void if null
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
