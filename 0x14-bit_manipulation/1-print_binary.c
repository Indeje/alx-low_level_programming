#include "main.h"


/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to representing in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_print_helper(n);
}


/**
 * _print_helper - helper function
 * @n: integer
 *
 * Return: no return value
 */

void _print_helper(unsigned long int n)
{
	if (n < 1)
		return;

	_print_helper(n >> 1);

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
