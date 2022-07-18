#include "main.h"

/**
 * binary_to_uint - convert a binary to unsigned int.
 * @b: pointer to a string
 * Return: the converted numbers or 0
*/

unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int total = 0;
	int decimalval = 1;
	int idx;

	for (idx = (slen - 1); idx >= 0; idx--)
	{
		if (b[idx] == '1')
		total += decimalval;
		decimalval *= 2;

		if (b[idx] != '0' && b[idx] != '1')
		{
			return (0);
		}
	}
	return (total);
}
