#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy string to new memory location
 * @str: pointer to string to be copied
 *
 * Return: pointer to dupicated string if successful, else NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (!(str))
		return (0);

	ptr = (char *) malloc(_strlen(str) + 1);

	if (ptr)
	{
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			i++;
		}

		ptr[i] = '\0';

		return (ptr);
	}

	return (0);
}


/**
 * _strlen - calculate length of string
 * @s: string to establish length of
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	char c = s[0];
	int len = 0;

	while (c != '\0')
	{
		len++;
		c = s[len];
	}

	return (len);
}
