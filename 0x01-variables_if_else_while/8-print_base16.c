#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	char s;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}

