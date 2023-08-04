#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: a pointer to the bit
 * @index: index of the bit
 *
 * Return: 1 if succesful otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned lon int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	s = 1 << index;
	*n = *n | s;

	return (1);
}
