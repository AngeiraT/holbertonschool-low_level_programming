#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: the format we print in
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	char *string;
	unsigned int i = 0;
	unsigned int f;

	while (format)
	{
		va_start(ptr, format);
		while (format[i])
		{
			f = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				string = va_arg(ptr, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				f = 0;
				break;
			}
		if (format[i + 1] && f)
			printf(", ");
		i++;
		}
		va_end(ptr);
		break;
	}
	printf("\n");
}
