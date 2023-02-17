#include <stdio.h>

/**
 * main - Entry point of the function
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 90; num < 100; num++)
		putchar(num);
	if (num != 99)
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
