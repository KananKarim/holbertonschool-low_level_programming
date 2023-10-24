#include "main.h"

/**
 *_atoi - function
 *@s: string
 *Return: result
 */

int _atoi(char *s)
{
int result, start, sign;
result = 0;
sign = 1;
start = 0;

while (*s)
{
if (*s == '-' && !start)
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
start = 1;
result = result * 10 + sign * (*s - '0');
}
else if (start)
{
break;
}
s++;
}
return (result);
}
