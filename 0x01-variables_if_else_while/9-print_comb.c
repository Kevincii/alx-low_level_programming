#include <stdio.h>

/**
 * main - Entry point of the function
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	if (num != 57)
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
