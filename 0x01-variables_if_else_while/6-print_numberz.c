#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar as char is a type of int
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
