#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: character of strings
 *Return: Sucess 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	char c;

	if (isdigit(c) == 0)
	{
		printf("Error\n", c);
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d", sum);
	return (0);

}
