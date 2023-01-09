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
	int i = 1, sum = 0, num;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
