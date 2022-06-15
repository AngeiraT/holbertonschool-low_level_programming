#include "main.h"

/**
 *_strlen - Entry point
 *@s: lenght of char
 *Return: int - lenght of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
	}

	return (lenght);
}
