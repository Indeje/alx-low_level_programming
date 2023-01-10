#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy string to new memory location
 * @str: pointer to string to be copied
 *
 * Return: pointer to dupicated string if successful, else NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr = (char *)malloc(sizeof(str));

	if (!(str) || !(ptr))
		return (0);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
