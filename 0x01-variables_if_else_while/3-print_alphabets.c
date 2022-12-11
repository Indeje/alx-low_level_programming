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
	char lower = 'a';
	char upper = 'A';

	for (; lower <= 'z'; lower++)
		putchar(lower);
	for (; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
