#include "main.h"

/**
 * puts2 - print alternative characters of string
 * @str: pointer to string to print
 *
 * Return: none
 */

void puts2(char *str)
{
	char c = *str;
	int len = 0;

	while (c != '\0')
	{
		if ((len % 2) == 0)
			_putchar(c);
		len++;
		c = *(str + len);
	}
	_putchar('\n');
}
