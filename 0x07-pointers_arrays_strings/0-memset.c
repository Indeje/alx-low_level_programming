#include "main.h"

/**
 * _memset - Fill memory address with constant byte
 * @s: pointer to memory address to be filled
 * @b: character to fill in memory
 * @n: number of bytes to fill in memory
 *
 * Return: pointer to memory address filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(s + i) = b;

	return (s);
}
