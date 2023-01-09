#include "main.h"

/**
 * wildcmp - compare two strings if can be considered identical
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!(s1) && !(s2))
		return (1);

	if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));

	if (!(s2))
		return (0);

	if (!(s1) && s2[0] != '*')
		return (0);

	if (!(s1) && s2[0] == '*')
		return (wildcmp(s1, s2 + 1));

	if (s2[0] == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
