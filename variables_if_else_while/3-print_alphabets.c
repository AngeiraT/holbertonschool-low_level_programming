#include <stdio.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
