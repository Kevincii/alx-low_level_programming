#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entrypoint for the function
 * Return: Always 0
 */
int main(void)
{
	char case;

	for (case = 'a'; case <= 'z'; case++)
	{
		if (case != 'e' && case != 'q')
			putchar(case);
	}

	putchar('\n');

	return (0);
}
