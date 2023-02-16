#include <stdio.h>
/**
 * main - entry point
 * retun: always 0
 */
int main(void)
{
	printf("size of a char: %i bytes(s)\n", sizeof(char));
	printf("size of an int: %i bytes(s)\n", sizeof(int));
	printf("size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}
