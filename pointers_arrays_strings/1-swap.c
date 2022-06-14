#include "main.h"

/**
 *swap_int - Entry point
 *@a: point to one value
 *@b: point to the other value
 *Return: Sucess 0
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*a = c;
	*b = d;
}
