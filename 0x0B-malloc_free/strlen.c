/**
 * _strlen - calculate length of string
 * @s: string to establish length of
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	char c = s[0];
	int len = 0;

	while (c != '\0')
	{
		len++;
		c = s[len];
	}

	return (len);
}
