#include "main.h"

/**
 * _strcpy - Copy string to buffer
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * for ( ; i < n; i++)
	 *	dest[i] = '\0';
	 */

	return dest;
}
