#include "main.h"

/**
 *rev_string - function
 *@s: string
 *Return: Nothing
 */

void rev_string(char *s)
{
char *start, *end, temp;
int len;
start = s;
len = 0;
while (*start)
{
len++;
start++;
}
start = s;
end = start + len - 1;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
