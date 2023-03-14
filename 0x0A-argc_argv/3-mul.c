#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints results of two numbers
 * @argc: number of arguments
 * @argv: argument array
 * Return: 1 if number of arguments isn't met, else 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;

		printf("%d\n", result);
		return (0);
}

