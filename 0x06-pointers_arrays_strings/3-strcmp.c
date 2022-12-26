#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: -1 if s1 < s2, 0 if s1 == s2, 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int count_s1 = 0, count_s2 = 0, sum_s1 = 0, sum_s2 = 0, x;

	while (s1[count_s1] != '\0')
	{
		x = s1[count_s1];
		sum_s1 += x;
		count_s1++;
	}
	while (s2[count_s2] != '\0')
	{
		x = s2[count_s2];
		sum_s2 += x;
		count_s2++;
	}

	return (sum_s1 - sum_s2);
}
