#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: pointer to string to print
 *
 * Return: none
 */

void puts_half(char *str)
{
	char c = *str;
	int len = 0, i = 0;

	for (; (*(str + len)) != '\0'; len++)
	{}
	for (; c != '\0'; i++, c = *(str + i))
	{
		if (i > ((len - 1) / 2))
			_putchar(c);
	}
	_putchar('\n');
}
