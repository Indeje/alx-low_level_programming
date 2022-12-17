#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 -> success
 */

int main(void)
{
	int i = '0';
	char y = 'a';

	for (; i <= '9'; i++)
	{
		putchar(i);
	}

	for (; y <= 'f'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
