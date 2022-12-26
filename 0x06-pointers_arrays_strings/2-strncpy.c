#include "main.h"

/**
 * _strncpy - copy string
 *
 * @dest: new string
 * @src: existing string
 * @n: maximum number of bytes from src to copy
 *
 * Return: pointer to copied string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count1 = 0;

	while ((src[count1] != '\0') && (count1 < n))
	{
		dest[count1] = src[count1];
		count1++;
	}

	return (dest);
}
