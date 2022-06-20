#include "main.h"

/**
 *_prime - Entry point
 *@n: number
 *@i: integer
 *Return: Integer
 */

int _prime(int n, int i)
{
	if (i == 1)
	{
		return (0);
	}

	if (n % i == 0)
	{
		return (1);
	}
	return (_prime(n, i - 1));
}

/**
 *is_prime_number - Entry point
 *@n: integer
 *Return: Sucess 1
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
