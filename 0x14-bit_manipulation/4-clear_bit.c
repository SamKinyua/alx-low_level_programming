#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: parameter
 * @index: index of bit
 *
 * Return: 1 if succesful otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index > 63)
		return (-1);

	t = 1 << index;

	if (*n & t)
		*n ^= t;

	return (1);
}
