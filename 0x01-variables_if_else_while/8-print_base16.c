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

	for (; i <= '9'; i++)
	{
		putchar(i);
	}

	char y = 'a';

	for (; y <= 'f'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
