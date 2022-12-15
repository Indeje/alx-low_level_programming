#include "main.h"

/**
 * _islower - Checks if passed argument is lowercase character
 * @c: character to check in ASCII code
 *
 * Return: 1 if lowercase; 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
