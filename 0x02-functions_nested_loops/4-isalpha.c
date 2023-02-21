#include "main.h"

/**
 * _isalpha - functions that checks for alphabetic characters
 * Return: 1 if a letter is lower or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'));
}
