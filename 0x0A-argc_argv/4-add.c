#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Adds positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 if successful, 1 if error occurred
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

