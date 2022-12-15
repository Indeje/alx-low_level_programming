#include "main.h"

/**
 * print_numbers - prints integers 0-9
 *
 * Return: no return value
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
