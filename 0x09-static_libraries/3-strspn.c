#include "main.h"

/**
 * _strspn - find length of initial segment of string containing only substring
 * @s: original string
 * @accept: substring
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i;

	while (*(s + len) != '\0')
	{
		for (i = 0; i < (unsigned int)_strlen(accept); i++)
		{
			if (*(s + len) == *(accept + i))
				break;
		}
		if (*(s + len) != *(accept + i))
			break;
		len++;
	}

	return (len);
}


/**
 * _strlen - find length of string
 * @s: pointer to string
 *
 * Return: length of string in bytes
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
