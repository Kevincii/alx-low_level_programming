#include <stdio.h>

/**
 * main - Entrypoint for the function that print strings from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
