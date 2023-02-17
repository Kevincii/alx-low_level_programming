#include <stdio.h>

/**
 * main - Entrypoint for the function
 * Return: Always 0
 */
int main(void)
{
	char cs;

	for (cs = 'a'; cs <= 'z'; cs++)
	{
		if (cs != 'e' && cs != 'q')
			putchar(cs);
	}

	putchar('\n');

	return (0);
}
