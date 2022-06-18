#include "main.h"

/**
 * *leet - Entry point
 *@s: string of words encoded
 *Return: s
 */
char *leet(char *s)
{
	char islower[] = {'a', 'e', 'o', 't', 'l'};
	char isupper[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == islower[j] || s[i] == isupper[j])
			s[i] = num[j];
		}
	}
return (s);
}
