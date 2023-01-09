#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: first string
 * @src: second string
 * @n: maximum number of bytes from src to use
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
		count1++;
	while ((src[count2] != '\0') && (count2 < n))
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}

	return (dest);
}
