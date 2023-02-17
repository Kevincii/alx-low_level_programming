#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entrypoint of the code which prints alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char l_c;
	for (l_c = 'a'; l_c <= 'z'; l_c++)
	{
		putchar(l_c);
	}
	putchar('\n');
	return (0);
}


