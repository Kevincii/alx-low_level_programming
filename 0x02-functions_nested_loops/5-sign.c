#include "main.h"
/**
 * _isalpha - function that prints sign of a number
 * @c: character
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */
int _isalpha(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	} else if (c == 0)
	{
		_putchar('48');
		return (0);
	} else if (c < 0)
	{
		_putchar('-');
	}
	return (-1);
}
