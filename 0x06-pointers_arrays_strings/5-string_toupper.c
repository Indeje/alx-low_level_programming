#include "main.h"

/**
 * string_toupper - Change all lowercase letters of string to uppercase
 * @ptr: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] -= 32;
		i++;
	}

	return (ptr);
}
