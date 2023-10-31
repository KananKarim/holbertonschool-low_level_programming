#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - function
 * @n:number
 * Return: is prime num
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (check_prime(n, n / 2));
}

/**
 * check_prime - function
 * @n:number
 * @i:the half of num
 * Return: is prime or not
 */

int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (i == 0)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i - 1));
	}
}
