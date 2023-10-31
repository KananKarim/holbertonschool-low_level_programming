#include "main.h"

int sqrt_find(int n, int i);

/**
 * _sqrt_recursion - function square
 * @n: number
 * Return: Square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_find(n, 1));
}

/**
 * sqrt_find - function
 * @n: number
 * @i: find square
 * Return: founded square
 */

int sqrt_find(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (n < i * i)
	{
		return (-1);
	}
	else
	{
		return (sqrt_find(n, i + 1));
	}

}
