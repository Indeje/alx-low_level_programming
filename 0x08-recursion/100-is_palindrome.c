#include "main.h"

/**
 * is_palindrome - check if string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, (_strlen_recursion(s) - 1)));
}

/**
 * check_palindrome - helper function
 * @s: pointer to string to be checked
 * @a: starting index
 * @len: string length
 *
 * Return: 1 if palindrome, else 0
 */

int check_palindrome(char *s, int a, int len)
{
	if (a >= len)
		return (1);

	if (s[len] == s[a])
		return (check_palindrome(s, (a + 1), (len - 1)));

	return (0);
}


/**
 * _strlen_recursion - find length of string
 * @s: string to find length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[0])
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}

	return (0);
}
