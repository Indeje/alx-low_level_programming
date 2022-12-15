#include "main.h"

/**
 * _isdigit - Checks if passed argument is a digit
 * @c: character to check in ASCII code
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
