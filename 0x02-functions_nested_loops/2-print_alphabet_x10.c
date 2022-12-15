#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10times
 *
 * Return: void -> no return value
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');

		i++;
	}
}
