#include <stdio.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	int lowerbase;
	char alpha;

	for (lowerbase = '0'; lowerbase <= '9'; lowerbase++)
	{

	putchar(lowerbase);

	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
	putchar(alpha);
	}

	putchar('\n');
	return (0);
}
