#include <stdio.h>

/**
 * main - uses puts to print the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if (s != 'e' && s != 'q')
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
