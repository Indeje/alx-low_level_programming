#include "main.h"

/**
 * print_diagonal - print straight line in terminal
 * @n: number of lines to print
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int i = 1, j;

	for (; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		if (i < n)
		{
			for (j = (n - i); j < n; j++)
				_putchar(' ');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
