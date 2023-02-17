#include <stdio.h>

/**
 * main - Entrypoint for the function
 * Return: Always 0
 */
int main(void)
{
	int num;
	char ab;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);

	putchar('\n');

	return (0);
}
