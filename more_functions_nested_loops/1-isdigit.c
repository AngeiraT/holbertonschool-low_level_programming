#include "main.h"

/**
 *_isdigit - Entry point
 *@c: is digit
 *Return: Sucess 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
