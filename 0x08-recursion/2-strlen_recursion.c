#include "main.h"

/**
 * _strlen_recursion - find length of string
 * @s: string to find length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0])
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
