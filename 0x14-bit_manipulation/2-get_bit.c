#include "main.h"

/**
 * get_bit - returns value of abit
 * @n: integer input
 * @index: integer unit position
 * Return: value of bit in index form or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
