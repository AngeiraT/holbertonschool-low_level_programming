#include "main.h"

/**
 *cap_string - Entry point
 *@s: string of words
 *Return: int - lenght of the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int z = 1;
	char *cap = s;
	char *special = "\t\n;,.!?\"(){}\0";

	while (*s)
	{
		if (z)
		{
			if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		z = 0;
		}

		for (i = 0; special[i]; i++)
		{
			if (*s == special[i])
			z = 1;
		}
		s++;
	}
	return (cap);
}
