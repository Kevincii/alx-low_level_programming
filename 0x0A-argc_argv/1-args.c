#include <stdio.h>
#include "main.h"

/**
 * main - function prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
