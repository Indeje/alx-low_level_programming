#include "main.h"

/**
 * _isalpha -> checks if passed argument is aphabetic character
 * @c: character to check in ASCII code
 *
 * Return: 1 if alphabetic; 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
