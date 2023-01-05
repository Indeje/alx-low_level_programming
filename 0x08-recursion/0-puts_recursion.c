#include "main.h"

/**
 * _puts_recursion - Print string to console followed by newline
 * @s: pointer to string to be printed
 *
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
