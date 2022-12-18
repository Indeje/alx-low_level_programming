#include "main.h"

/**
 * more_numbers - prints integers 0-14 10times
 *
 * Return: no return value
 */

void more_numbers(void)
{
	int a = '0', b = '1', i = 0, count = 0;

	for (; i < 10; i++)
	{
		for (; count <= 14; count++)
		{
			if (count > 9)
				_putchar(b);
			_putchar(a);
		}
		_putchar('\n');
	}
}
