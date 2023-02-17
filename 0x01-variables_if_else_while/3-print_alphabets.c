#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entrypoint for the function that prints alphabets
 * Return: Always 0
 */
int main(void)
{
	char case;

	for (case = 'a'; case <= 'z'; case++)
		putchar(case);

	for (case = 'A'; case <= 'Z'; case++)
		putchar(case);

			putchar('\n');

			return (0);
}
