#include "main.h"
#include <stdio.h>

/**
*print_array - Entry
*@a: array
*@n: total the characters of the string
*
*Return: Sucess 0
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (c < n - 1)
		{
			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');

}
