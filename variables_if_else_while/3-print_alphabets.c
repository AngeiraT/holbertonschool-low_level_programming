#include <stdio.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	char i, b;

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
