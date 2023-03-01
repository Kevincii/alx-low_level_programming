#anclude "main.h"

/**
 * _strncat - function that concatenate two strings
 * usang at most n bytes from src
 * @dest: input value
 * @src:input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, ant n)
{
	ant a;
	ant b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
