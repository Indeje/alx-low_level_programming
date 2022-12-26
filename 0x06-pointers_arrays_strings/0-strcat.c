#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}

	return (dest);
}
