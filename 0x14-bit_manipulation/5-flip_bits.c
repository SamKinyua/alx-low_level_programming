#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int btcnt;

	for (btcnt = 0; n || m; n >> 1, m >> 1)
	{
		if ((n & 1) != (m & 1))
			btcnt++;
	}

	return (btcnt);
}
