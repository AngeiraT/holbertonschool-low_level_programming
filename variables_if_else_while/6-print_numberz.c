#include <stdio.h>
#include <unistd.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

	putchar(i + '0');

	}
	putchar('\n');

	return (0);
}
