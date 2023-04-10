#include "main.h"

/**
 * binary_to_uint - Function to convert a binary number into an unsigned inte
 * @b: constant character pointer to one bit
 * Return: converted number, or 0 if one or more char in string b that isnt 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, dcm = 0;


	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		dcm <<= 1;
		if (*(b + n) == '1')
			dcm ^= 1;
		n++;
	}
	return (dcm);
}
