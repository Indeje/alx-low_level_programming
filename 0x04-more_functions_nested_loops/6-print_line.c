#include "main.h"

/**
 * print_line - print straight line in terminal
 * @n: number of lines to print
 *
 * Return: no return value
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
