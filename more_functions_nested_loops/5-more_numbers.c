#include "main.h"

/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
int i, count;
count = 0;
while (count < 10)
{
count++;
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
}
