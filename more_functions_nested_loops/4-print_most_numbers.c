#include "main.h"

/**
 *print_most_numbers - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			putchar (i);
		}
	}

	putchar('\n');

}
