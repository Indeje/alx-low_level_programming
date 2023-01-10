#include <stdlib.h>
#include "main.h"

/**
 * create_array - create char array and initialize with specific char
 * @size: size of character array
 * @c: initialized character
 *
 * Return: pointer to array if successful, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = (char *)malloc(size * (sizeof(char)));

	if (!(ptr) || size == 0)
		return (0);

	for (; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
