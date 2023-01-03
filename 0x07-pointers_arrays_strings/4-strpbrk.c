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

	for (; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				break;
		}
		if (*(s + a) == *(accept + b))
			break;
	}

	return (s + a);
}
