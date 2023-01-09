#include <stdio.h>
#include <stdlib.h>

/**
 * main - find number of coins to give as change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, else 1
 */

int main(int argc, char **argv)
{
	int i = 0, cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (; argv[1][i]; i++)
	{
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			printf("0\n");
			return (0);
		}
	}

	cents = atoi(argv[1]);

	coins += (cents / 25);

	cents -= (abs(cents / 25) * 25);

	coins += (cents / 10);

	cents -= (abs(cents / 10) * 10);

	coins += (cents / 5);

	cents -= (abs(cents / 5) * 5);

	coins += (cents / 2);

	cents -= (abs(cents / 2) * 2);

	coins += cents;

	printf("%d\n", coins);

	return (0);
}
