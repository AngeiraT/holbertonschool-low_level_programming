#include "main.h"

/**
 *factorial - Entry point
 *@n: factorial number
 *Return: Sucess 0
 */
int factorial(int n)
{
	int fact;

	if (n == 1)
	{
		return (-1);

	}
	else
	{
		fact = (n * factorial(n - 1));
		return (fact);

	}
}
