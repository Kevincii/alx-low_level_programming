#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entrypoint of the code which prints alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}






