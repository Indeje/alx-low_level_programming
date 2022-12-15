#include "main.h"

/**
 * more_numbers - prints integers 0-14 10times
 *
 * Return: no return value
 */

void print_numbers(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		int i = '0';

		for (; i <= '14'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
