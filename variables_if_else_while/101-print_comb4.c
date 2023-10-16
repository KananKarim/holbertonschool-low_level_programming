#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1;
int n2;
int n3;
for (n1 = 48; n1 <= 57; n1++)
{
for (n2 = n1 + 1; n2 <= 57; n2++)
{
for (n3 = n2 + 1; n3 <= 57; n3++)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n3 != 57 || n2 != 56 || n1 != 55)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
