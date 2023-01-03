#include "main.h"

/**
 * _strstr - locate substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to first occurence of substring in string, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b, tmp;

	while (*(haystack + a))
	{
		b = 0;
		tmp = a;

		while (*(haystack + tmp) == *(needle + b))
		{
			b++;
			tmp++;

			if (!(*(needle + b)))
				return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
