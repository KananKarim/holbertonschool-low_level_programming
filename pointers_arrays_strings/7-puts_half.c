#include "main.h"

/**
 *puts_half - function
 *@str : string
 *Return: nothing
 */

void puts_half(char *str)
{
int len;
char *start;
start = str;
len = 0;
while (*str)
{
len++;
str++;
}
str = start;
if (len % 2 == 0)
{
len = len / 2;
}
else
{
len = (len - 1) / 2;
}
start += len;
while (*start)
{
_putchar(*start);
start++;
}
_putchar('\n');
}
