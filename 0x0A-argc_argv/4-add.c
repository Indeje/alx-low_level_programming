#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
