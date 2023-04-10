#include "main.h"

/**
 * get_endianness - sets value of a bit to 1 at gven index
 * Return: 1 if little  endian, 0 if big endian
 */

int get_endianness(void)
{
	int p = 1;
	char *q = (char *)&p;
	return (int)*q;
}
