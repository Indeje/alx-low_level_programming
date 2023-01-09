#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int count = 0;

	for (; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
