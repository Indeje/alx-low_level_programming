#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string if successful, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0;

	if (!(s1))
		s1 = "";

	if (!(s2))
		s2 = "";

	ptr = (char *) malloc(_strlen(s1) + _strlen(s2) + 1);

	if (ptr)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];

		for (j = 0; s2[j] != '\0'; i++, j++)
			ptr[i] = s2[j];

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
