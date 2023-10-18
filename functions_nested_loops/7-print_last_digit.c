#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
