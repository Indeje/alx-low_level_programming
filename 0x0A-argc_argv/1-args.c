#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
