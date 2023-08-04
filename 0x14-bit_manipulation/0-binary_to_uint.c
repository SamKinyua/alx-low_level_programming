#include "main.h"

/**
 * binary to uint - converts binary to unsigned int
 * @b: string containing the binary number
 *
 * Return: converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int len;
	int base;

	if (!b)
		return (0);

	r = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			r += base;
		}
	}

	return (r);
}
