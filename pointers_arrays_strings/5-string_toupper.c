#include "main.h"

/**
 *string_toupper - Entry point
 *@s: upper
 *Return: Sucess 1
 */
char *string_toupper(char *s)
{
	int i, a;

	a = 0;

	while (*(s + a) != '\0')
		a++;

	for (i = 0; i <= a; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
