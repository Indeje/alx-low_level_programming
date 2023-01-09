#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to copy
 *
 * Return: pointer to destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
