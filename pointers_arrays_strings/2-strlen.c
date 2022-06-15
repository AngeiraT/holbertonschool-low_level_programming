#include "main.h"

/**
 *_strlen - Entry point
 *@s: lenght of char
 *Return: int - lenght of the string
 */

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
		printf("%d", lenght);
	}
	return (lenght);
}
