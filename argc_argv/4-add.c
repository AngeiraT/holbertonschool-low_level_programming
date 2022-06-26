#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: character of strings
 *Return: Sucess 0
 */

int main(int argc, char *argv[])
{
	int i, sum;
	char c;

	sum = 0;
	c = '5';
	c = '+';

	if (isdigit(c) == 0)
	{
		printf("Error\n");
	}
	else	
	return (1);

		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d", sum);
		return (0);
}
