#include "main.h"

/**
 * _strchr - Locate character in string
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to first occurence of character, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0' && *(s + i) != c)
		i++;

	if (*(s + i) != c)
		return ('\0');

	return (s + i);
}
