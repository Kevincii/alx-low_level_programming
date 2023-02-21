#include <stdio.h>
/**
 * main - entrypoint of the code
 * Return: always 0
 */
int main(void)
{
	char alpha

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		printf("%d", alpha);
	putchar('\n');
	return (0);
}
