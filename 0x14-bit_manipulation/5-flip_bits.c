#include "main.h"

/**
 * flip_bits - returns number of bits to flip
 * @n: input pointer
 * @m: second
 *
 * Return:Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipper = 0;
	unsigned long int ama = n ^ m;

	while (ama > 0)
	{
		if ((ama & 1) != 0)
			flipper++;
		ama = ama >> 1;
	}
	return (flipper);
}
