#include "main.h"

/**
 * _strpbrk - search string for any byte in a set
 * @s: string to search
 * @accept: set of accepted bytes
 *
 * Return: pointer to first acceptable byte, NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	for (; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}

	return ('\0');
}
