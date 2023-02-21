#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
int print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
