#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Prints lowercase alphabets'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	int z = 65;

	while (z <= 90)
		{
			putchar(z);
			z++;
		}
		putchar('\n');
		return (0);
}
