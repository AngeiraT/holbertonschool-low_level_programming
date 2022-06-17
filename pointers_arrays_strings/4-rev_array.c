#include "main.h"

/**
 *reverse_array - Entry point
 *@a: reverse array
 *@n: numbers of the elements
 *Return: Sucess 1
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
