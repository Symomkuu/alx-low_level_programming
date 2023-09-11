#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
