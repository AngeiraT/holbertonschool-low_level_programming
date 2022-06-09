#include <stdio.h>
#include <unistd.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	int numbers;
	

	for (numbers = '0'; numbers <= '9'; numbers++)
	{

	putchar(numbers);
	putchar(',');
	putchar(' ');

	}
	putchar('\n');

	return (0);
}
