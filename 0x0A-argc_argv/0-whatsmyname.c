#include <stdio.h>
/**
 * main - funtion that prints name of program
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
