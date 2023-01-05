#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: pointer to string to print
 *
 * Return: no return value
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
