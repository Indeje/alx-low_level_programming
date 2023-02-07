#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Convert binary to int
 * @b: binary string
 *
 * Return: converted integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	while (len--)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);

		if (b[len] == '1')
			sum += (1 << count);

		count++;
	}

	return (sum);
}


/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */


int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
