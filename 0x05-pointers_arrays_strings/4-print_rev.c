#include "main.h"

/**
 * print_rev - print reverse string
 * @str: pointer to string to print
 *
 * Return: none
 */

void print_rev(char *str)
{
	char c = *str;
	int len = 0;

	while (c != '\0')
	{
		len++;
		c = *(str + len);
	}
	for (; len > 0; len--)
	{
		c = *(str + (len - 1));
		_putchar(c);
	}
	_putchar('\n');
}
