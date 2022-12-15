#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void -> no return value
 */

void print_alphabet(void)
{
	char c = 'a';
	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

	return;
}
