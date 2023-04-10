#include "main.h"

/**
 * clear_bit - sets bit value to 1
 * @n: input pointer
 * @index: unit position
 * Return: 1 if successful, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n &= ~(mask);
	return (1);
}
