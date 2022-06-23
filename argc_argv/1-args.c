
#include <stdio.h>

/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: character of strings
 *Return: Sucess 0
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%d\n", argc - 1);
	for (count = 0; count < argc; count++)
	{
		printf("%s", argv[count]);
	}
	return (0);
}
