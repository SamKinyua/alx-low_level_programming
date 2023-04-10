#include "main.h"

/**
 * binary_to_uint - Function to convert a binary number into an unsigned inte
 * @b: constant character pointer to one bit
 * Return: converted number, or 0 if one or more char in string b that isnt 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	for (; *b != '\0'; b++)
	{
		if (*b == '\0' || *b == '1')
		{
			result = result << 1;
			result |= (*b - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
