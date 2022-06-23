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

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
