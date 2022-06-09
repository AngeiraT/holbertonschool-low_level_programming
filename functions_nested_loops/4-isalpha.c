#include "main.h"

/**
 * _isalpha - Entry point
 *@c: alpha
 *Return: Void
 */

int _isalpha(int c)
{

	char l;
	int count = 10;

	for (count = 0; count <= 9; count++)
	{

		for (l = 'a'; l <= 'z'; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}
}
