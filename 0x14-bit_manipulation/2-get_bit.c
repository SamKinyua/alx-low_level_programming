#include "main.h"

/**
 * get_bit - returns bit value at given index
 * @n: number to check bit in
 * @index: index at which at which to check bit
 *
 * Return: value of the bit, -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	if (n == 0 && index < 64)
		return (0);

	for (r = 0; r <= 63; n >>= 1, r++)
	{
		if (index == r)
		{
			return (n & 1);
		}
	}
	return (-1);
}
