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
	int a = 0, b = 0;

	while (*(haystack + a))
	{
		while (*(needle + b))
		{
			if (*(haystack + a + b) != *(needle + b))
				break;

			b++;
		}

		if (!(*(needle + b)))
			return (haystack + a);

		a++;
	}

	return ('\0');
}
