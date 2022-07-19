#include "main.h"

/**
 * clear_bit -  sets the value of a bit to
 * 0 at a given index
 * @n: long integer number
 * @index: position to be set
 *
 * Return: 1 if it works, -1 if its an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	num = ~(1 << index);
	*n = *n & num;

	return (1);
}
