#include <stdlib.h>

int _strtok(char *str, char delim)
{
	char *search_start = (char *)malloc(sizeof(char));

	search_start[0] = str[0];

	while (search_start[0] == delim)
		search_start += 1;

	if (search_start[0] != delim)
}
