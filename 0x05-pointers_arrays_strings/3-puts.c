#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @strng: string to print
 */
void _puts(char *strng)
{
	while (*strng != '\0')
	{
		_putchar(*strng++);
	}
	_putchar('\n');
}
