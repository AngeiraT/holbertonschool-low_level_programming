#include "main.h"

/**
*puts_half - Entry
*@str: half the string
*
*Return: Sucess 0
*/

void puts_half(char *str)
{
	int a = 0;

	int c;

	while (*(str + a) != '\0')
		a++;

	c = a / 2;

	if (a % 2 == 1)
		c++;


	while (c < a)
	{
		putchar(str[c]);
		c++;
	}

	putchar('\n');

}
