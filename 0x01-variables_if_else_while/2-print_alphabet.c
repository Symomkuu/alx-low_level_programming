#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Prints lowercase alphabets'
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int n = 97 ; n <= 122 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
