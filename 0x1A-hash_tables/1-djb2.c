#include "hash_tables.h"

/**
 * hash_djb2 - fun0tion that generates a random number
 * through a string given (hash number)
 *
 * @str: string
 * Return: a hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
