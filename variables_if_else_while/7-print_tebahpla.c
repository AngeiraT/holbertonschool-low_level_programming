#include <stdio.h>
#include <unistd.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
	{

	putchar(lowerCase);

	}
	putchar('\n');

	return (0);
}

