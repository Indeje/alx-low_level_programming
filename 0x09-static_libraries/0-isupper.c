#include "main.h"

/**
 * _isupper - Checks if passed argument is uppercase character
 * @c: character to check in ASCII code
 *
 * Return: 1 if uppercase; 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
