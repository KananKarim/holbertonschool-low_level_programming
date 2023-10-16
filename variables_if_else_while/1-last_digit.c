#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
int n;
char *sent;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
sent = "and is greater than 5";
}
else if (lastDigit == 0)
{
sent = "and is 0";
}
else if (lastDigit < 6 && lastDigit != 0)
{
sent = "and is less than 6 and not 0";
}
printf("Last digit of %d is %d %s\n", n, lastDigit, sent);
return (0);
}
