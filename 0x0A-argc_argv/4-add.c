#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point. Function that Adds positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int is_positive = 1;
		int j = 0;

		if (arg[j] == '+')
			j++;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);

	if (argc == 1)
		printf("0\n");

	return (0);
}

