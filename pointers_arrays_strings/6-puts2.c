#include "main.h"

/**
 *puts2 - function
 *@str:string
 *Return:nothing
 */

void puts2(char *str)
{
int start, len;
char *begin;
begin = str;
len = 0;
while (*str)
{
len++;
str++;
}
str = begin;
for (start = 0; start < len; start += 2)
{
_putchar(str[start]);
}
_putchar('\n');
}
