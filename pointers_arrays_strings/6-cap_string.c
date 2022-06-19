#include "main.h"

/**
 *cap_string - Entry point
 *@s: string of words
 *Return: int - lenght of the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char special[] = " \t\n,;.!?\"(){}\0";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (s[i] == special[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
