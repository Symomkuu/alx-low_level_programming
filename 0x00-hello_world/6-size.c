#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu bytes(s)\n", sizeof(char));
	printf("size of a an int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	return (0);
}
