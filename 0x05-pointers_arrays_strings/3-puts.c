#include "main.h"

/**
 * _puts - print string
 * @str: pointer to string to print
 *
 * Return: none
 */

void _puts(char *str)
{
	char c = *str;
	int len = 0;

	while (c != '\0')
	{
		_putchar(c);
		len++;
		c = *(str + len);
	}
	_putchar('\n');
}
