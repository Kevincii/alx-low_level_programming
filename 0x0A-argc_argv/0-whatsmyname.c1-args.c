#include <stdio.h>
#include "main.h"

/**
 * main - function prints the name of the program
 int argc _attribute_((unused)) - function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
