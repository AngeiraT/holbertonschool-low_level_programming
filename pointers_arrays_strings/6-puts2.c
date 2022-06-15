#include "main.h"

/**
 *puts2 - Entry point
 *@str: string
 *Return: Sucess 0
 */
void puts2(char *str)
{
	int a = 0;

	int c;

	while (*(str + a) != '\0')
		a++;

	for (c = 0; c <= a - 1; c = c + 2)
	{
		putchar(str[c]);
	}

	putchar('\n');

}
