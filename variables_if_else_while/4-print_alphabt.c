#include <stdio.h>

/**
 * main - Starting the execution
 *
 * Return: Always 0 (program will execute successfully)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		else
		{
			putchar (i);
		}
	}

	putchar('\n');

	return (0);
}
