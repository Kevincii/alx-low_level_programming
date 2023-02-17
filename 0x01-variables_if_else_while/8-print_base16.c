#include <stdio.h>

/**
 * main - Entrypoint for the function
 * Return: Always 0
 */
int main(void)
{
	int num;
	char ab;

	for (num = 0; num <= 9; num++)
		putchar(num % 10);

	for (ab = 'a'; ab <= 'f'; ab++)
		putchar(ab);

	putchar('\n');

	return (0);
}
