#include "main.h"
int isit(int n, int i);
/**
 *is_prime_number - checks if anumber is prime
 *@n: input number
 *Return: 0. if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isit(n, 2));
}
/**
 *isit - tries to divide smaller numbers by it
 *@n: input number
 *@i: divisor
 *Return:
 *1. if prime
 *0. if not prime
 */
int isit(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (isit(n, i + 1));
}
