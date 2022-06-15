#include "main.h"

/**
 *rev_string - Entry point
 *@s: string
 *Return: Sucess 1
 */

void rev_string(char *s)
{
	int a = 0;

	int c;
	char *begin, *end, temp;

	begin = s;

	end = s;

	while (*(s + a) != '\0')
		a++;

	for (c = 0; c < a - 1; c++)
	{
		end++;
	}

	for (c = 0; c < a / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}


}
