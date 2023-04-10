#include "main.h"

/**
 * _right_pbin_mask - recursive helper function
 * @n: input number
 */

void _right_pbin_mask(unsigned long int n)
{
	if (n == 0)
		return;
	_right_pbin_mask(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - outputs binary of a number
 * @n: input number
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_right_pbin_mask(n);
}
