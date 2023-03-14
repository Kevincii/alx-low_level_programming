#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 if successful, 1 if error occurred
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}

